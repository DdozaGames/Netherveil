// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "StageTriggerVolume.generated.h"


UCLASS()
class NETHERVEIL_API AStageTriggerVolume : public ATriggerBox
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    int32 StageIndex=0;
	

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnPlayerEnter(class AActor* OverlappedActor, class AActor* OtherActor);
};
