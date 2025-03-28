// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyFSM_Boss.h"
#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "Enemy/EnemyAnimBoss.h"
#include "Enemy/EnemyBoss.h"
#include "Enemy/EnemyBossAttack_EnergyWave.h"
#include "Enemy/EnemyBossAttack_Fireball.h"
#include "Player/NetherveilPlayer.h"


void UEnemyFSM_Boss::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<AEnemyBoss>(GetOwner());
	if (me)
	{
		bossAnim = Cast<UEnemyAnimBoss>(me->GetMesh()->GetAnimInstance());
		ai = Cast<AAIController>(me->GetController());
	}
	attackRange = 1500.f;
	attackDelayTime = 5.0f;
	hp = 10;
}

void UEnemyFSM_Boss::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsDashing)
	{
		// 돌진 애니메이션 실행 (한 번만 실행되도록)
		if (!bIsDashAnimPlaying)
		{
			FString DashSection = TEXT("Dash");
			bossAnim->PlayAttackAnim(FName(*DashSection));
			bIsDashAnimPlaying = true;
		}

		DashTimeElapsed += DeltaTime;
		float Alpha = FMath::Clamp(DashTimeElapsed / DashDuration, 0.0f, 1.0f);
		FVector NewLocation = FMath::Lerp(DashStartLocation, DashTargetLocation, Alpha);
		me->SetActorLocation(NewLocation, true); // 충돌 고려하여 이동

		if (Alpha >= 1.0f) // 돌진 완료
		{
			bIsDashing = false;

			if (bAttackAfterDash) // 돌진 후 공격 실행
			{
				FString sectionName = TEXT("Attack1");
				bossAnim->PlayAttackAnim(FName(*sectionName));
				UE_LOG(LogTemp, Warning, TEXT("Attack After Rush"));
				bAttackAfterDash = false; // 공격 1회만 실행
			}
		}
	}
}


void UEnemyFSM_Boss::AttackState()
{
	//Super::AttackState();
	
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime )
	{
		UE_LOG(LogTemp, Warning, TEXT(" UEnemyFSM_Boss::Attack!"));
		currentTime = 0;
		bossAnim->bAttackEnd = false;
		bossAnim->bAttackWaitEnd = false;
		RotateToPlayer();
		PlayAttack();
	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange  && bossAnim->bAttackWaitEnd)
	{
		currentState = EEnemyState::Move;
		anim->animState = currentState;
	}
}

void UEnemyFSM_Boss::PlayAttack()
{
	//Attack -> Move 넘어갈 때 공격 애니메이션 다 끝나면 전환되도록
	//몽타주로 제어

	int32 index = FMath::RandRange(0,2);
	FString sectionName = FString::Printf(TEXT("Attack%d"),index);

	//에너지파 공격
	if (index==0)
	{
		bossAnim->PlayAttackAnim(FName(*sectionName));
	}

	//근거리 공격 
	else if (index==1)
	{
		StartDash();
	}

	//불덩이 공격
	else
	{
		bossAnim->PlayAttackAnim(FName(*sectionName));
		//불덩이 우수수 떨어짐
	}
	
}

void UEnemyFSM_Boss::OnDamageProcess()
{
	//Super::OnDamageProcess();
	hp--;

	if (hp > 0)
	{
		currentState = EEnemyState::Damage;

		currentTime = 0;

		//공격 중일 땐 데미지 애님 X 
		if (bossAnim->bAttackEnd)
		{
			int32 index = FMath::RandRange(0, 2);
			FString sectionName = FString::Printf(TEXT("Damage%d"), index);

			anim->PlayDamageAnim(FName(*sectionName));
		}
		

	}
	else
	{
		currentState = EEnemyState::Die;

		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		anim->PlayDamageAnim(TEXT("Die"));

		//UE_LOG(LogTemp, Warning, TEXT("Die"));

	}
	anim->animState = currentState;
	ai->StopMovement();
}

void UEnemyFSM_Boss::DieState()
{
	//Super::DieState();

	//엔딩 시퀀스 재생 
}

void UEnemyFSM_Boss::RotateToPlayer()
{
	FVector Direction = (target->GetActorLocation() - me->GetActorLocation()).GetSafeNormal();

	FRotator NewRotation = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewRotation.Pitch = 0.0f;  // 상하 기울기 방지 (필요 시 제거)
	NewRotation.Roll = 0.0f;   // 롤 방지

	me->SetActorRotation(NewRotation);
}


void UEnemyFSM_Boss::StartDash()
{
	DashStartLocation = me->GetActorLocation();
	DashTargetLocation = DashStartLocation + (me->GetActorForwardVector() * 1000.0f); // 8m 돌진
	bIsDashing = true;
	DashTimeElapsed = 0.0f;
	bAttackAfterDash = true; // 돌진 후 공격 실행
	bIsDashAnimPlaying = true;

	UE_LOG(LogTemp, Warning, TEXT("start rush!"));
}

