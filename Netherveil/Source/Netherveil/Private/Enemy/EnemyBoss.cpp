// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyBoss.h"

#include "Enemy/EnemyBossAttack_EnergyWave.h"
#include "Enemy/EnemyBossAttack_Fireball.h"
#include "Player/NetherveilPlayer.h"

void AEnemyBoss::BeginPlay()
{
	Super::BeginPlay();
	//->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBoss::OnBeginOverlap);
}

void AEnemyBoss::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto player = Cast<ANetherveilPlayer>(OtherActor);
	if (player)
	{
		player->OnHitEvent();
	}
}

void AEnemyBoss::FireEnergyWave()
{
	if (EnergyWaveFactory)
	{
		FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100.0f;
		FRotator SpawnRotation = GetActorRotation();

		GetWorld()->SpawnActor<AEnemyBossAttack_EnergyWave>(EnergyWaveFactory, SpawnLocation, SpawnRotation);
	}
}
void AEnemyBoss::SpawnFireBall()
{
    if (!FireballFactory) return;

    float SpawnRadius = 4000.0f; // 불덩이 생성 범위
    float TotalDuration = 3.0f; // 총 3초 동안 생성
    float SpawnInterval = 0.1f; // 0.3초마다 생성
    int32 SpawnCount = TotalDuration / SpawnInterval; // 총 생성 횟수

    int32 CurrentSpawn = 0;

    UE_LOG(LogTemp, Warning, TEXT("Starting Fireball Spawn..."));

    GetWorld()->GetTimerManager().SetTimer(FireballTimerHandle, FTimerDelegate::CreateLambda([this, SpawnRadius, SpawnInterval, SpawnCount, &CurrentSpawn]()
        {
            if (CurrentSpawn >= SpawnCount)
            {
                GetWorld()->GetTimerManager().ClearTimer(FireballTimerHandle);
                return;
            }

            float RandomX = FMath::RandRange(-SpawnRadius, SpawnRadius);
            float RandomY = FMath::RandRange(-SpawnRadius, SpawnRadius);
            FVector SpawnLocation = GetActorLocation() + FVector(RandomX, RandomY, 2000.0f);
            FRotator SpawnRotation = FRotator::ZeroRotator;

            UE_LOG(LogTemp, Warning, TEXT("Spawning Fireball at: %s"), *SpawnLocation.ToString());

            AEnemyBossAttack_Fireball* Fireball = GetWorld()->SpawnActor<AEnemyBossAttack_Fireball>(FireballFactory, SpawnLocation, SpawnRotation);
            if (Fireball)
            {
                UE_LOG(LogTemp, Warning, TEXT("Fireball Spawned!"));
            }

            ++CurrentSpawn;

        }), SpawnInterval, true);
}
