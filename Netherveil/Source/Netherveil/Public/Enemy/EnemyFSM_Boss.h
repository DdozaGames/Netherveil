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

	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void AttackState() override;

	void PlayAttack();

	void PlayAttackWait();

	UPROPERTY()
	UEnemyAnimBoss* bossAnim;

	void OnDamageProcess(float amount) override;

	void DieState() override;

	void RotateToPlayer();
	void StartDash();

	void StartRushAttack();

	bool bIsDashing = false;
	FVector DashStartLocation;
	FVector DashTargetLocation;
	float DashTimeElapsed = 0.0f;
	float DashDuration = 0.7f; // x초 동안 돌진
	bool bAttackAfterDash = false; // 돌진 후 공격할지 여부
	bool bIsDashAnimPlaying = false; //돌진 애니메이션 재생 여부

	float initialHP = 5000.0f;
	
};
