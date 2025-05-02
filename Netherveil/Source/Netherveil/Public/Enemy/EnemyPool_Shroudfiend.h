// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyPool_Shroudfiend.generated.h"

UCLASS()
class NETHERVEIL_API AEnemyPool_Shroudfiend : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemyPool_Shroudfiend();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> DarkShroudfiendFactory;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> WhiteShroudfiendFactory;

	UPROPERTY(EditAnywhere)
	int32 PoolSize = 10;

	UPROPERTY()
	TArray<AActor*> Pool_DarkShroudfiend;

	UPROPERTY()
	TArray<AActor*> Pool_WhiteShroudfiend;

	AActor* GetDarkShroudfiend();

	AActor* GetWhiteShroudfiend();

	void ReturnEnemy(AActor* Enemy);


};
