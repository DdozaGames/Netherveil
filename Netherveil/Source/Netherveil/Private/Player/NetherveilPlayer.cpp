
#include "Player/NetherveilPlayer.h"

#include "Blueprint/UserWidget.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Enemy/EnemyFSM.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Player/Bullet.h"
#include "Player/PlayerAnim.h"

ANetherveilPlayer::ANetherveilPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/Asset/ParagonLtBelica/Characters/Heroes/Belica/Meshes/Belica.Belica'"));
	if (TempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(TempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90), FRotator(0, -90, 0));
	}

	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	springArmComp->SetupAttachment(RootComponent);
	springArmComp->SetRelativeLocation(FVector(0, 70, 90));
	springArmComp->TargetArmLength = 400;
	springArmComp->bUsePawnControlRotation = true;

	CamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CamComp"));
	CamComp->SetupAttachment(springArmComp);
	CamComp->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = true;

	JumpMaxCount = 2;

	granadeGunComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("granadeGunComp"));
	granadeGunComp->SetupAttachment(GetMesh(), TEXT("hand_rSocket"));
	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempGunMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/Asset/Weapon/GrenadeGun/Mesh/SK_FPGun.SK_FPGun'"));
	if (TempGunMesh.Succeeded())
	{
		granadeGunComp->SetSkeletalMesh(TempGunMesh.Object);
		granadeGunComp->SetRelativeLocation(FVector(-17, 10, -3));
		granadeGunComp->SetRelativeRotation(FRotator(0, 90, 0));

	}

	sniperGunComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperGunComp"));
	sniperGunComp->SetupAttachment(GetMesh(), TEXT("hand_rSocket"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempSniperMesh(TEXT("/Script/Engine.StaticMesh'/Game/Asset/Weapon/SniperGun/sniper1.sniper1'"));
	if (TempSniperMesh.Succeeded())
	{
		sniperGunComp->SetStaticMesh(TempSniperMesh.Object);
		sniperGunComp->SetRelativeLocation(FVector(-42, 7, 1));
		sniperGunComp->SetRelativeRotation(FRotator(0, 90, 0));
		sniperGunComp->SetRelativeScale3D(FVector(0.15f));
	}

	ConstructorHelpers::FObjectFinder<USoundBase> tempSound(TEXT("/Script/Engine.SoundWave'/Game/Asset/Weapon/SniperGun/Rifle.Rifle'"));
	if (tempSound.Succeeded())
	{
		bulletSound = tempSound.Object;
	}

}

void ANetherveilPlayer::BeginPlay()
{
	Super::BeginPlay();

	_sniperUI = CreateWidget(GetWorld(), sniperUIFactory);
	_crosshairUI = CreateWidget(GetWorld(), crosshairUIFactory);
	_crosshairUI->AddToViewport();

	CamComp = FindComponentByClass<UCameraComponent>();
	if (!CamComp)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find Camera Component!"));
	}

	//기본으로 유탄총 사용
	ChangeToGrenadeGun();

	anim = Cast<UPlayerAnim>(GetMesh()->GetAnimInstance());
}

void ANetherveilPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void ANetherveilPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ANetherveilPlayer::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ANetherveilPlayer::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &ANetherveilPlayer::InputHorizontal);
	PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &ANetherveilPlayer::InputVertical);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ANetherveilPlayer::InputJump);
	PlayerInputComponent->BindAction(TEXT("Sprint"), IE_Pressed, this, &ANetherveilPlayer::Sprint);
	PlayerInputComponent->BindAction(TEXT("Sprint"), IE_Released, this, &ANetherveilPlayer::StopSprinting);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ANetherveilPlayer::InputFire);
	PlayerInputComponent->BindAction(TEXT("GrenadeGun"), IE_Pressed, this, &ANetherveilPlayer::ChangeToGrenadeGun);
	PlayerInputComponent->BindAction(TEXT("SniperGun"), IE_Pressed, this, &ANetherveilPlayer::ChangeToSniperGun);
	PlayerInputComponent->BindAction(TEXT("Sniper"), IE_Pressed, this, &ANetherveilPlayer::SniperAim);
	PlayerInputComponent->BindAction(TEXT("Sniper"), IE_Released, this, &ANetherveilPlayer::SniperAim);
}

void ANetherveilPlayer::Turn(float value)
{
	AddControllerYawInput(value);
}

void ANetherveilPlayer::LookUp(float value)
{
	AddControllerPitchInput(value);
}

void ANetherveilPlayer::InputHorizontal(float value)
{
	direction.Y = value;
}

void ANetherveilPlayer::InputVertical(float value)
{
	direction.X = value;
}

void ANetherveilPlayer::InputJump()
{
	Jump();
}

void ANetherveilPlayer::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed *= SprintSpeedMultiplier;
}

void ANetherveilPlayer::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed /= SprintSpeedMultiplier;

}

void ANetherveilPlayer::Move()
{
	direction = FTransform(GetControlRotation()).TransformVector(direction);
	AddMovementInput(direction);
	direction = FVector::ZeroVector;

}

void ANetherveilPlayer::InputFire()
{
	//애니메이션 몽타주 재생
	if (anim)
	{
		anim->PlayAttackAnim();
	}

	//사운드 재생 
	UGameplayStatics::PlaySound2D(GetWorld(), bulletSound);

	//카메라 셰이크 재생
	auto controller = GetWorld()->GetFirstPlayerController();
	controller->PlayerCameraManager->StartCameraShake(cameraShake);


	if (bUsingGrenadeGun)
	{
		FTransform firePosition = granadeGunComp->GetSocketTransform(TEXT("FirePosition"));
		GetWorld()->SpawnActor<ABullet>(bulletFactory, firePosition);
	}


	else
	{
		FVector startPos = CamComp->GetComponentLocation();
		FVector endPos = CamComp->GetComponentLocation() + CamComp->GetForwardVector() * 5000;
		FHitResult hitInfo;
		FCollisionQueryParams params;
		params.AddIgnoredActor(this);

		bool bHit = GetWorld()->LineTraceSingleByChannel(hitInfo, startPos, endPos, ECC_Visibility, params);

		if (bHit)
		{
			FTransform bulletTrans;
			bulletTrans.SetLocation(hitInfo.ImpactPoint);
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), bulletEffectFactory, bulletTrans);

			auto hitComp = hitInfo.GetComponent();
			if (hitComp && hitComp->IsSimulatingPhysics())
			{
				FVector force = -hitInfo.ImpactNormal * hitComp->GetMass() * 500000;
				hitComp->AddForce(force);
			}

			auto enemy = hitInfo.GetActor()->GetDefaultSubobjectByName(TEXT("FSM"));
			if (enemy)
			{
				auto enemyFSM = Cast<UEnemyFSM>(enemy);
				enemyFSM->OnDamageProcess();
			}
		}
	}
}

void ANetherveilPlayer::ChangeToGrenadeGun()
{
	bUsingGrenadeGun = true;
	sniperGunComp->SetVisibility(false);
	granadeGunComp->SetVisibility(true);
}

void ANetherveilPlayer::ChangeToSniperGun()
{
	bUsingGrenadeGun = false;
	sniperGunComp->SetVisibility(true);
	granadeGunComp->SetVisibility(false);
}

void ANetherveilPlayer::SniperAim()
{
	if (bUsingGrenadeGun)
	{
		return;
	}

	// 개별 로그 추가 (어떤 변수가 NULL인지 확인)
	if (!_sniperUI)
	{
		UE_LOG(LogTemp, Error, TEXT("SniperAim: _sniperUI is NULL!"));
	}
	if (!_crosshairUI)
	{
		UE_LOG(LogTemp, Error, TEXT("SniperAim: _crosshairUI is NULL!"));
	}
	if (!CamComp)
	{
		UE_LOG(LogTemp, Error, TEXT("SniperAim: CamComp is NULL!"));
	}

	// NULL이 있으면 크래시 방지를 위해 리턴
	if (!_sniperUI || !_crosshairUI || !CamComp)
	{
		return;
	}

	if (bSniperAim == false)
	{
		bSniperAim = true;
		_sniperUI->AddToViewport();
		CamComp->SetFieldOfView(45.0f);
		_crosshairUI->RemoveFromParent();
	}
	else
	{
		bSniperAim = false;
		_sniperUI->RemoveFromParent();
		CamComp->SetFieldOfView(90.0f);
		_crosshairUI->AddToViewport();
	}
}


