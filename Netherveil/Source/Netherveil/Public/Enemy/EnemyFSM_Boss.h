// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAnimBoss.h"
#include "Enemy/EnemyFSM.h"
#include "EnemyFSM_Boss.generated.h"

/**
 * 
 */
UCLASS()
class NETHERVEIL_API UEnemyFSM_Boss : public UEnemyFSM
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	virtual void AttackState() override;

	void PlayAttack();

	void PlayAttackWait();

	UPROPERTY()
	UEnemyAnimBoss* bossAnim;

	void OnDamageProcess() override;

	void DieState() override;
};
