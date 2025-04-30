// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletPool.generated.h"

UCLASS()
class NETHERVEIL_API ABulletPool : public AActor
{
	GENERATED_BODY()
	
public:	
	ABulletPool();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullet> BulletClass;

	UPROPERTY(EditAnywhere)
	int32 PoolSize = 50;

	class ABullet* GetBullet();

protected:
	virtual void BeginPlay() override;

private:
	TArray<ABullet*> BulletPool;


};
