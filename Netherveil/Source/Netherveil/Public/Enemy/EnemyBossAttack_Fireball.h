#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBossAttack_Fireball.generated.h"

UCLASS()
class NETHERVEIL_API AEnemyBossAttack_Fireball : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemyBossAttack_Fireball();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UPROPERTY(VisibleAnywhere, Category = Collision)
	class USphereComponent* collisionComp;

	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
	class UStaticMeshComponent* bodyMeshComp;
};
