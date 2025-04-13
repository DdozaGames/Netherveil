
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
//void AEnemyBossAttack_EnergyWave::CheckCollision()
//{
//    if (!bCanDetect) return; // 감지 중지
//
//    FVector StartLocation = GetActorLocation();
//    FVector EndLocation = StartLocation + GetActorForwardVector() * WaveRadius;
//
//    // 구체 충돌 영역
//    FCollisionShape SweepShape = FCollisionShape::MakeSphere(WaveRadius);
//   
//    FHitResult HitResult;
//   
//    bool bHit = GetWorld()->SweepSingleByChannel(
//        HitResult,
//        StartLocation,
//        EndLocation,
//        FQuat::Identity,
//        ECC_GameTraceChannel4,  
//        SweepShape
//    );
//
//    // 디버그 (범위 확인용)
//    DrawDebugSphere(GetWorld(), EndLocation, WaveRadius, 12, FColor::Red, false, 0.2f);
//
//    if (bHit)
//    {
//        auto player = Cast<ANetherveilPlayer>(HitResult.GetActor());
//        if (player)
//        {
//            player->OnHitEvent();
//            bCanDetect = false;
//            UE_LOG(LogTemp, Warning, TEXT(" AEnemyBossAttack_EnergyWave::hit player"));
//        }
//
//        //AActor* HitActor = HitResult.GetActor();
//        //if (HitActor && HitActor->IsA(ANetherveilPlayer::StaticClass()))  // 플레이어 감지만 허용
//        //{
//        //    UE_LOG(LogTemp, Warning, TEXT(" AEnemyBossAttack_EnergyWave::hit player"));
//        //    auto player = Cast<ANetherveilPlayer>(HitActor);
//        //    //데미지 적용
//        //    player->OnHitEvent();
//
//        //    bCanDetect = false;
//        //    // 타격 후 즉시 제거 (옵션)
//        //    //Destroy();
//        //}
//    }
//}
//
