// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyFSM_Boss.h"
#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "Enemy/EnemyAnimBoss.h"
#include "Enemy/EnemyBoss.h"
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
	attackRange = 500.f;
	attackDelayTime = 5.0f;
}

void UEnemyFSM_Boss::AttackState()
{
	//Super::AttackState();
	
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		UE_LOG(LogTemp, Warning, TEXT(" UEnemyFSM_Boss::Attack!"));
		currentTime = 0;
		bossAnim->bAttackEnd = false;
		
		PlayAttack();
	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange && bossAnim->bAttackEnd &&bossAnim->bAttackWaitEnd)
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
	bossAnim->PlayAttackAnim(FName(*sectionName));
}

void UEnemyFSM_Boss::OnDamageProcess()
{
	//Super::OnDamageProcess();
	hp--;

	if (hp > 0)
	{
		currentState = EEnemyState::Damage;

		currentTime = 0;

		int32 index = FMath::RandRange(0, 2);
		FString sectionName = FString::Printf(TEXT("Damage%d"), index);
		anim->PlayDamageAnim(FName(*sectionName));

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
