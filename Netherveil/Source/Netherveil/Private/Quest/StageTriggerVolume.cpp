// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest/StageTriggerVolume.h"

#include "Kismet/GameplayStatics.h"
#include "Netherveil/NetherveilGameMode.h"
#include "Player/NetherveilPlayer.h"

void AStageTriggerVolume::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AStageTriggerVolume::OnPlayerEnter);
}

void AStageTriggerVolume::OnPlayerEnter(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor->IsA<ANetherveilPlayer>())  // 플레이어 캐릭터만 반응
    {
        auto gameMode = Cast<ANetherveilGameMode>(UGameplayStatics::GetGameMode(this));
        if (gameMode)
        {
            gameMode->StartStage(StageIndex); // StageIndex 는 BP에서 지정
            SetActorEnableCollision(false);  // 다시 못 밟게 막기
            auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), ANetherveilPlayer::StaticClass());
            auto player = Cast<ANetherveilPlayer>(actor);
            if (player)
            {
                player->EnterNewStageUI(StageIndex);
            }
        }
    }
}
