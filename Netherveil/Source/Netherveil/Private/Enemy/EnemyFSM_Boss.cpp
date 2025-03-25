// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyFSM_Boss.h"
#include "AIController.h"
#include "Enemy/EnemyAnimBoss.h"
#include "Enemy/EnemyBoss.h"


void UEnemyFSM_Boss::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<AEnemyBoss>(GetOwner());
	if (me)
	{
		anim = Cast<UEnemyAnimBoss>(me->GetMesh()->GetAnimInstance());
		ai = Cast<AAIController>(me->GetController());
	}
	attackRange = 1500.f;
	attackDelayTime = 5.0f;
}

void UEnemyFSM_Boss::AttackState()
{
	Super::AttackState();
}

void UEnemyFSM_Boss::PlayAttack()
{
	//Attack -> Move 넘어갈 때 공격 애니메이션 다 끝나면 전환되도록
	//몽타주로 제어

	int32 index = FMath::RandRange(0,2);
	FString sectionName = FString::Printf(TEXT("Attack%d"),index);
	anim->PlayAttackAnim(FName(*sectionName));
}
