// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyBoss.h"

#include "Components/CapsuleComponent.h"
#include "Enemy/EnemyBossAttack_EnergyWave.h"
#include "Enemy/EnemyBossAttack_Fireball.h"
#include "Kismet/GameplayStatics.h"
#include "Player/NetherveilPlayer.h"


void AEnemyBoss::BeginPlay()
{
	Super::BeginPlay();
    
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBoss::OnBeginOverlap);
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
    if (!FireballFactory)
    {
        UE_LOG(LogTemp, Error, TEXT("FireballFactory is null!"));
        return;
    }

    const float SpawnRadius = 3000.0f;
    const float TotalDuration = 4.0f;
    const float SpawnInterval = 0.2f;
    const int32 SpawnCount = TotalDuration / SpawnInterval;

    int32* CurrentSpawn = new int32(0); // 포인터로 캡처하여 값 유지

    // 타이머 시작
    GetWorld()->GetTimerManager().SetTimer(
        FireballTimerHandle,
        FTimerDelegate::CreateLambda([this, SpawnRadius, SpawnCount, CurrentSpawn]()
            {
                if (*CurrentSpawn >= SpawnCount)
                {
                    GetWorld()->GetTimerManager().ClearTimer(FireballTimerHandle);
                    delete CurrentSpawn; // 메모리 해제
                    //UE_LOG(LogTemp, Warning, TEXT("Fireball spawning complete."));
                    return;
                }

                FVector RandomOffset = FVector(
                    FMath::RandRange(-SpawnRadius, SpawnRadius),
                    FMath::RandRange(-SpawnRadius, SpawnRadius),
                    2000.0f
                );

                FVector SpawnLocation = GetActorLocation() + RandomOffset;
                FRotator SpawnRotation = FRotator::ZeroRotator;

                // 콜리전 처리 방식 명시
                FActorSpawnParameters SpawnParams;
                SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

                AEnemyBossAttack_Fireball* Fireball = GetWorld()->SpawnActor<AEnemyBossAttack_Fireball>(
                    FireballFactory, SpawnLocation, SpawnRotation, SpawnParams);

                /*if (Fireball)
                {
                    UE_LOG(LogTemp, Warning, TEXT("Fireball spawned at %s"), *SpawnLocation.ToString());
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Failed to spawn fireball at %s"), *SpawnLocation.ToString());
                }*/

                (*CurrentSpawn)++;
            }),
        SpawnInterval,
        true
    );
}


void AEnemyBoss::PlayCameraShake()
{
    if (cameraShake)
    {
        // 카메라 셰이크 재생
        auto controller = GetWorld()->GetFirstPlayerController();
        controller->PlayerCameraManager->StartCameraShake(cameraShake);
    }
}
