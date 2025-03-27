// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/Enemy.h"
#include "EnemyBoss.generated.h"

/**
 * 
 */
UCLASS()
class NETHERVEIL_API AEnemyBoss : public AEnemy
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	TSubclassOf<class AEnemyBossAttack_EnergyWave> EnergyWaveFactory;


	UFUNCTION(BlueprintCallable, Category ="Attack")
	void FireEnergyWave();

	
};
