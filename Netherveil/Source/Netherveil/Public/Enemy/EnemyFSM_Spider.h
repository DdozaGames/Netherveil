// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/EnemyFSM.h"
#include "EnemyFSM_Spider.generated.h"

/**
 * 
 */
UCLASS()
class NETHERVEIL_API UEnemyFSM_Spider : public UEnemyFSM
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void AttackState() override;

	void OnDamageProcess() override;
};
