// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemySpawner.h"
#include "DrawDebugHelpers.h"
#include  "Enemy/EnemyPool_Shroudfiend.h"
#include "Kismet/GameplayStatics.h"
#include "Netherveil/NetherveilGameMode.h"
#include "Player/NetherveilPlayer.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	auto gm = Cast<ANetherveilGameMode>(UGameplayStatics::GetGameMode(this));
	if (gm &&gm->SharedEnemyPool_Shroudfiend)
	{
		ShroudFiendPool = gm->SharedEnemyPool_Shroudfiend;
	}
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}


void AEnemySpawner::ActivateSpawner(int Index)
{
	bIsActive = true;

	
	//메인 스테이지에서만 계속 스폰 
	if (Index==0 || Index ==1 )
	{
		UE_LOG(LogTemp, Warning, TEXT("ActivateSpawner::Index 0 or 1"));
		//일단 스폰 
		SpawnEnemies();
		SpawnTimer(true);
	}

	//서브 스테이지
	else if (Index>=3 )
	{
		UE_LOG(LogTemp, Warning, TEXT("ActivateSpawner::Index 3 or 4"));
		SpawnEnemies();
	}

	//보스 스테이지일 경우 시퀀스 재생 후 보스 & 적 스폰 
	if (Index==2 && EnemyBossFactory)
	{
		GetWorld()->GetTimerManager().SetTimer(
			SpawnTimerHandle,
			this,
			&AEnemySpawner::SpawnBoss,
			12.5f,
			false
		);		
	}
	else if (Index==2) {
		SpawnEnemies();
		SpawnTimer(true);
	}
}

void AEnemySpawner::SpawnEnemies()
{
	// 스폰 종료 조건 추가하기 !! -> 퀘스트 완료 시
	if (!bIsActive ) {
		StopSpawning();
		return;
	}
	/*if (EnemyShroudFiendFactory)
	{
		FVector SpawnLocation1 = GetActorLocation() + FMath::VRand() * SpawnRadius;
		GetWorld()->SpawnActor<AActor>(EnemyShroudFiendFactory, SpawnLocation1, FRotator::ZeroRotator);
		

	}*/

	if (bShroudfiend)
	{
		if (ShroudFiendPool)
		{
			AActor* Enemy = ShroudFiendPool->GetEnemy();
			if (Enemy)
			{
				FVector SpawnLocation = GetActorLocation() + FMath::VRand() * SpawnRadius;
				Enemy->SetActorLocation(SpawnLocation);
				Enemy->SetActorRotation(FRotator::ZeroRotator);
			}
		}
	}
	
	if (EnemySpiderFactory)
	{
		FVector SpawnLocation2 = GetActorLocation() + FMath::VRand() * SpawnRadius;
		GetWorld()->SpawnActor<AActor>(EnemySpiderFactory, SpawnLocation2, FRotator::ZeroRotator);
	}
	
}

void AEnemySpawner::SpawnBoss()
{
	if (EnemyBossFactory)
	{
		FVector SpawnBossLocation = GetActorLocation();
		GetWorld()->SpawnActor<AActor>(EnemyBossFactory, SpawnBossLocation, FRotator::ZeroRotator);
	}
	
}

void AEnemySpawner::StopSpawning()
{
	//UE_LOG(LogTemp, Warning, TEXT("AEnemySpawner::StopSpawning()-index : %d"),StageIndex);
	GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
	bIsActive = false;
}

void AEnemySpawner::SpawnTimer(bool bLoop)
{
	//UE_LOG(LogTemp, Warning, TEXT("AEnemySpawner::SpawnTimer"));

	GetWorld()->GetTimerManager().SetTimer(
		SpawnTimerHandle,
		this,
		&AEnemySpawner::SpawnEnemies,
		SpawnInterval,
		bLoop 
	);
}
