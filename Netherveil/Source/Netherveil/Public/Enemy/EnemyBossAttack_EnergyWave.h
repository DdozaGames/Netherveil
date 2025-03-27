
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

    // 에너지 파의 이동 속도
    UPROPERTY(EditDefaultsOnly, Category = "Movement")
    float Speed = 1000.0f;

    // 최대 이동 거리
    UPROPERTY(EditDefaultsOnly, Category = "Movement")
    float MaxDistance = 3500.0f;

    // 현재 이동한 거리
    float CurrentDistance = 0.0f;

    // 충격파 범위
    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float WaveRadius = 400.0f;

    // 데미지 값
    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float Damage = 5.0f;

    // 파티클 시스템 (에너지 웨이브 효과)
    UPROPERTY(VisibleAnywhere, Category = "Effects")
    class UParticleSystemComponent* WaveParticle;

    // 충돌 감지 함수
    void CheckCollision();

    UPROPERTY(VisibleAnywhere, Category = "Combat")
    bool bCanDetect = true;  // 감지 여부 (true면 감지 가능)

};
