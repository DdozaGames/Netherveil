
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
class ANetherveilPlayer;
#include "Item.generated.h"

UCLASS()
class NETHERVEIL_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();

protected:
	virtual void BeginPlay() override;

public:	


	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	//충돌 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Collision)
	class UBoxComponent* collisionComp;

	//외관 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
	class UStaticMeshComponent* itemMeshComp;

	//플레이어가 아이템을 먹었을 때 실행
	virtual void OnPickup(ANetherveilPlayer* player);

	//아이템 효과 실행 
	virtual void ApplyEffect(ANetherveilPlayer* player);
	
};



