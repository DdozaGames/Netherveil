// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyAnimBoss.h"

void UEnemyAnimBoss::OnEndAttackAnimation()
{
	Super::OnEndAttackAnimation();

	int32 index = FMath::RandRange(0, 1);
	FString sectionName = FString::Printf(TEXT("AttackWait%d"), index);
	bAttackWaitEnd = false;
	PlayAttackWaitAnim(FName(*sectionName));
	
}

