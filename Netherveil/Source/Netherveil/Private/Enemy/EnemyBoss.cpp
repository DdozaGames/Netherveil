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

	float SpawnRadius = 400.0f; // 불덩이 생성 범위
	float TotalDuration = 3.0f; // 총 3초 동안 생성
	float SpawnInterval = 0.3f; // 0.3초마다 생성

	float ElapsedTime = 0.0f;

	while (ElapsedTime < TotalDuration)
	{
		float RandomX = FMath::RandRange(-SpawnRadius, SpawnRadius);
		float RandomY = FMath::RandRange(-SpawnRadius, SpawnRadius);
		FVector SpawnLocation = GetActorLocation() + FVector(RandomX, RandomY, 100.0f);
		FRotator SpawnRotation = FRotator::ZeroRotator;

		// 일정 시간 간격으로 불덩이 생성
		GetWorld()->GetTimerManager().SetTimer(FireballTimerHandle, FTimerDelegate::CreateLambda([this, SpawnLocation, SpawnRotation]()
			{
				AEnemyBossAttack_Fireball* Fireball = GetWorld()->SpawnActor<AEnemyBossAttack_Fireball>(FireballFactory, SpawnLocation, SpawnRotation);
				if (Fireball)
				{
					UE_LOG(LogTemp, Warning, TEXT("s"));
				}
			}), ElapsedTime, false);

		ElapsedTime += SpawnInterval;
	}
}
