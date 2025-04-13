
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBossAttack_EnergyWave.generated.h"

UCLASS()
class NETHERVEIL_API AEnemyBossAttack_EnergyWave : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemyBossAttack_EnergyWave();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UPROPERTY(VisibleAnywhere, Category = Collision)
    class USphereComponent* collisionComp;

    // 에너지 파의 이동 속도
    UPROPERTY(EditDefaultsOnly)
    float Speed = 1000.0f;

    // 최대 이동 거리
    UPROPERTY(EditDefaultsOnly)
    float MaxDistance = 3500.0f;

    // 현재 이동한 거리
    float CurrentDistance = 0.0f;

    // 충격파 범위
    UPROPERTY(EditDefaultsOnly)
    float WaveRadius = 450.0f;

    // 데미지 값
    UPROPERTY(EditDefaultsOnly)
    float Damage = 5.0f;

    // 충돌 감지 함수
    void CheckCollision();

    UPROPERTY(VisibleAnywhere)
    bool bCanDetect = true;  // 감지 여부 (true면 감지 가능)

};


