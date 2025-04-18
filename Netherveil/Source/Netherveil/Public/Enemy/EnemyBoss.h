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

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	TSubclassOf<class AEnemyBossAttack_EnergyWave> EnergyWaveFactory;


	UFUNCTION(BlueprintCallable, Category ="Attack")
	void FireEnergyWave();

	UFUNCTION(BlueprintCallable, Category = "Attack")
	void SpawnFireBall();

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	TSubclassOf<class AEnemyBossAttack_Fireball> FireballFactory; // 불덩이 액터 블루프린트

	FTimerHandle FireballTimerHandle; // 불덩이 생성 타이머

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UCameraShakeBase> cameraShake;

	UFUNCTION(BlueprintCallable, Category = "Attack")
	void PlayCameraShake();
};
