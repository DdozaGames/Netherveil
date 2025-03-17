// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rift.generated.h"

UCLASS()
class NETHERVEIL_API ARift : public AActor
{
	GENERATED_BODY()
	
public:	
	ARift();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	//충돌 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Collision)
	class USphereComponent* collisionComp;
	//외관 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
	class USkeletalMeshComponent* bodyMeshComp;
};
