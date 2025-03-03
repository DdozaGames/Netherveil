
#include "Player/NetherveilPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

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

}

void ANetherveilPlayer::BeginPlay()
{
	Super::BeginPlay();

	CamComp = FindComponentByClass<UCameraComponent>();
	if (!CamComp)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find Camera Component!"));
	}
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
	/*PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ANetherveilPlayer::InputFire);
	PlayerInputComponent->BindAction(TEXT("GrenadeGun"), IE_Pressed, this, &ANetherveilPlayer::ChangeToGrenadeGun);
	PlayerInputComponent->BindAction(TEXT("SniperGun"), IE_Pressed, this, &ANetherveilPlayer::ChangeToSniperGun);
	PlayerInputComponent->BindAction(TEXT("Sniper"), IE_Pressed, this, &ANetherveilPlayer::SniperAim);
	PlayerInputComponent->BindAction(TEXT("Sniper"), IE_Released, this, &ANetherveilPlayer::SniperAim);*/
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


