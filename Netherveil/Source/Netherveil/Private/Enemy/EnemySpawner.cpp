// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemySpawner.h"

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
	
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::ActivateSpawner()
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
}

void AEnemySpawner::SpawnEnemies()
{
	// 스폰 종료 조건 추가하기 !! -> 퀘스트 완료 시
	if (!bIsActive || !EnemyFactory) {
		StopSpawning();
		return;
	}
	FVector SpawnLocation = GetActorLocation() + FMath::VRand() * SpawnRadius;
	GetWorld()->SpawnActor<AActor>(EnemyFactory, SpawnLocation, FRotator::ZeroRotator);

}

void AEnemySpawner::StopSpawning()
{
	UE_LOG(LogTemp, Warning, TEXT("AEnemySpawner::StopSpawning()"));
	GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
	bIsActive = false;
}