// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetherveilGameMode.h"

#include "EngineUtils.h"
#include "Enemy/EnemySpawner.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Quest/Rift.h"

void ANetherveilGameMode::BeginPlay()
{
    Super::BeginPlay();

    // 월드에 있는 모든 EnemySpawner 찾아서 배열에 추가
    TArray<AActor*> FoundSpawners;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawner::StaticClass(), FoundSpawners);

    for (AActor* Actor : FoundSpawners)
    {
        if (AEnemySpawner* Spawner = Cast<AEnemySpawner>(Actor))
        {
            StageSpawners.Add(Spawner);
        }
    }

    for (TActorIterator<AEnemyPool_Shroudfiend> It(GetWorld()); It; ++It)
    {
        SharedEnemyPool_Shroudfiend = *It;
        break;
    }

    for (TActorIterator<AEnemyPool_Spider> It(GetWorld()); It; ++It)
    {
        SharedEnemyPool_Spider = *It;
        break;
    }
}

void ANetherveilGameMode::StartStage(int32 StageIndex)
{
    UE_LOG(LogTemp, Warning, TEXT("ANetherveilGameMode::StartStage"));

	CurrentStage = StageIndex;


    for (AEnemySpawner* Spawner : StageSpawners)
    {
        if (Spawner && Spawner->StageIndex == StageIndex)
        {
            Spawner->ActivateSpawner(StageIndex);
        }
    }
    
}

void ANetherveilGameMode::OnStageClear()
{
    UE_LOG(LogTemp, Warning, TEXT("Stage %d Clear!"), CurrentStage);

    StartStage(CurrentStage + 1);
}

void ANetherveilGameMode::StopSpawning()
{
    for (AEnemySpawner* Spawner : StageSpawners)
    {
        if (Spawner && Spawner->StageIndex == CurrentStage)
        {
            Spawner->StopSpawning();
        }
    }
}

