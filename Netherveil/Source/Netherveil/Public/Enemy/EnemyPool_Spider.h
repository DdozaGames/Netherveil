// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyPool_Spider.generated.h"

UCLASS()
class NETHERVEIL_API AEnemyPool_Spider : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyPool_Spider();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> SpiderFactory;

	UPROPERTY(EditAnywhere)
	int32 PoolSize = 10;

	UPROPERTY()
	TArray<AActor*> Pool_Spider;

	AActor* GetSpider();

	void ReturnEnemy(AActor* Enemy);

};
