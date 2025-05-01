// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/EnemySpawner.h"
#include "GameFramework/GameModeBase.h"
#include "NetherveilGameMode.generated.h"


UCLASS(minimalapi)
class ANetherveilGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray< AEnemySpawner*> StageSpawners;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrentStage = 0;

	UFUNCTION(BlueprintCallable)
    void StartStage(int32 StageIndex);

    UFUNCTION()
    void OnStageClear();

    UFUNCTION()
    void StopSpawning();

    UPROPERTY()
    class AEnemyPool_Shroudfiend* SharedEnemyPool_Shroudfiend;

protected:
    virtual void BeginPlay() override;
};



