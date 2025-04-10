// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemySpawner.h"
#include "DrawDebugHelpers.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugSphere(
		GetWorld(),
		GetActorLocation(),    // 중심 위치
		SpawnRadius,           // 반지름
		32,                    // 세그먼트 수 (조밀도)
		FColor::Green,         // 색상
		true,                  // persistentLines: true로 하면 꺼질 때까지 유지됨
		0.f,                   //  lifeTime: 0이면 영구
		0,                     // Depth Priority
		1.f                    // 선 두께
	);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::ActivateSpawner(int Index)
{
	bIsActive = true;
	SpawnEnemies();
	GetWorld()->GetTimerManager().SetTimer(
		SpawnTimerHandle,
		this,
		&AEnemySpawner::SpawnEnemies,
		SpawnInterval,
		true // 반복
	);
	//보스 스테이지일 경우 보스 스폰 
	if (Index==2 && !bSpawnBoss)
	{
		SpawnBoss();
		bSpawnBoss = true;
	}
}

void AEnemySpawner::SpawnEnemies()
{
	// 스폰 종료 조건 추가하기 !! -> 퀘스트 완료 시
	if (!bIsActive ) {
		StopSpawning();
		return;
	}
	if (EnemyShroudFiendFactory)
	{
		FVector SpawnLocation1 = GetActorLocation() + FMath::VRand() * SpawnRadius;
		GetWorld()->SpawnActor<AActor>(EnemyShroudFiendFactory, SpawnLocation1, FRotator::ZeroRotator);

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
	UE_LOG(LogTemp, Warning, TEXT("AEnemySpawner::StopSpawning()"));
	GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
	bIsActive = false;
}
