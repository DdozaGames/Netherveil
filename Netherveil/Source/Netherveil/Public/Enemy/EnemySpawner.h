// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class NETHERVEIL_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemySpawner();

protected:
	virtual void BeginPlay() override;

public:	


	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemyShroudFiendFactory;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemySpiderFactory;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemyBossFactory;

	FTimerHandle SpawnTimerHandle;

	UPROPERTY(EditAnywhere)
	float SpawnInterval = 10.0f;

	UPROPERTY(EditAnywhere)
	float SpawnRadius = 300.f;

	UPROPERTY(BlueprintReadOnly)
	bool bIsActive = false;

	void ActivateSpawner(int Index);

	void SpawnEnemies();

	void SpawnBoss();

	bool bSpawnBoss = false;

	UFUNCTION()
	void StopSpawning();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stage")
	int32 StageIndex = 0;

	//스폰 시 한번만 스폰할지 계속 스폰할지
	void SpawnTimer(bool bLoop);
	
	UPROPERTY(EditAnywhere)
	class AEnemyPool_Shroudfiend* ShroudFiendPool;

	UPROPERTY(EditAnywhere)
	class AEnemyPool_Spider* SpiderPool;

	//스포너에서 체크(true)된 적만 스폰 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDarkShroudfiend = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWhiteShroudfiend = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpider = false;
};
