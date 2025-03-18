// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rift.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRiftDestroyed);

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

	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	//충돌 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Collision)
	class USphereComponent* collisionComp;
	//외관 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
	class USkeletalMeshComponent* bodyMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rift")
	FName RiftID;  // 고유한 균열 ID

	UPROPERTY(BlueprintAssignable)
	FOnRiftDestroyed OnRiftDestroyed;

	UFUNCTION()
	void DestroyRift();  // 파괴 시 호출

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 riftHP = 5;

	void TakeDamage();
};
