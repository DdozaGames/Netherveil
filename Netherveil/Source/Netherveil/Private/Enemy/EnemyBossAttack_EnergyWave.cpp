
#include "Enemy/EnemyBossAttack_EnergyWave.h"

#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Player/NetherveilPlayer.h"

AEnemyBossAttack_EnergyWave::AEnemyBossAttack_EnergyWave()
{
	PrimaryActorTick.bCanEverTick = true;

    //충돌체 
    collisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    RootComponent = collisionComp;

}

void AEnemyBossAttack_EnergyWave::BeginPlay()
{
	Super::BeginPlay();
    collisionComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBossAttack_EnergyWave::OnBeginOverlap);
}

void AEnemyBossAttack_EnergyWave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // 이동 처리
    FVector NewLocation = GetActorLocation() + GetActorForwardVector() * Speed * DeltaTime;
    SetActorLocation(NewLocation);

    CurrentDistance += Speed * DeltaTime;

    //충돌 체크
    //CheckCollision();

    // 최대 거리 도달 시 제거
    if (CurrentDistance >= MaxDistance)
    {
        Destroy();
    }
}

void AEnemyBossAttack_EnergyWave::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    auto player = Cast<ANetherveilPlayer>(OtherActor);
    if (player)
    {
        player->OnHitEvent();
        UE_LOG(LogTemp, Warning, TEXT(" AEnemyBossAttack_EnergyWave::hit player"));
        //this->Destroy();
    }
}
