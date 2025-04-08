// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetherveilGameMode.h"

#include "Enemy/EnemySpawner.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

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

   UE_LOG(LogTemp, Warning, TEXT(" %d"), StageSpawners.Num());
}

void ANetherveilGameMode::StartStage(int32 StageIndex)
{
    UE_LOG(LogTemp, Warning, TEXT("ANetherveilGameMode::StartStage"));
    if (StageSpawners.IsValidIndex(StageIndex))
    {
        CurrentStage = StageIndex;
        StageSpawners[StageIndex]->ActivateSpawner();
    }
}

void ANetherveilGameMode::OnStageClear()
{
    UE_LOG(LogTemp, Warning, TEXT("Stage %d Clear!"), CurrentStage);

    StartStage(CurrentStage + 1);
}
