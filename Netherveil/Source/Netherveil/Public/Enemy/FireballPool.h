// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireballPool.generated.h"


UCLASS()
class NETHERVEIL_API AFireballPool : public AActor
{
	GENERATED_BODY()
	
public:	
	AFireballPool();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AEnemyBossAttack_Fireball> FireballFactory;

	UPROPERTY(EditAnywhere)
	int32 PoolSize = 30;

	UPROPERTY()
	TArray<AEnemyBossAttack_Fireball*> FireballPool;

	class AEnemyBossAttack_Fireball* GetFireball();

};
