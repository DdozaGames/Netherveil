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
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemyShroudFiendFactory;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemySpiderFactory;


	FTimerHandle SpawnTimerHandle;

	UPROPERTY(EditAnywhere)
	float SpawnInterval = 10.0f;

	UPROPERTY(EditAnywhere)
	float SpawnRadius = 300.f;

	UPROPERTY(BlueprintReadOnly)
	bool bIsActive = false;

	void ActivateSpawner();

	void SpawnEnemies();

	UFUNCTION()
	void StopSpawning();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stage")
	int32 StageIndex = 0;

};
