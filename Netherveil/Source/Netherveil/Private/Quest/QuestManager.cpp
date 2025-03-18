

#include "Quest/QuestManager.h"
#include "Kismet/GameplayStatics.h"
#include "Quest/QuestData.h"
#include "Quest/Rift.h"

AQuestManager::AQuestManager()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AQuestManager::BeginPlay()
{
	Super::BeginPlay();

    // 첫 번째 퀘스트 시작 (DataTable의 첫 번째 행 선택)
    if (QuestDataTable)
    {
        TArray<FName> RowNames = QuestDataTable->GetRowNames();
        if (RowNames.Num() > 0)
        {
            StartQuest(RowNames[0]);
        }
    }
}

void AQuestManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AQuestManager::StartQuest(FName QuestID)
{
    if (!QuestDataTable) return;

    // DataTable에서 퀘스트 데이터 가져오기
    static const FString ContextString(TEXT("Quest Lookup"));
    FQuestData* Quest = QuestDataTable->FindRow<FQuestData>(QuestID, ContextString);

    if (Quest)
    {
        UE_LOG(LogTemp, Warning, TEXT("Start Quest: %s"), *Quest->QuestName.ToString());

        CurrentQuestID = QuestID;

        // 균열 찾기
        TArray<AActor*> FoundRifts;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARift::StaticClass(), FoundRifts);

        for (AActor* Actor : FoundRifts)
        {
            ARift* Rift = Cast<ARift>(Actor);
            if (Rift)
            {
                if (Rift->RiftID == Quest->TargetRiftID)
                {
                    //  현재 퀘스트의 목표 균열만 활성화
                    Rift->OnRiftDestroyed.AddDynamic(this, &AQuestManager::OnRiftDestroyed);
                    UE_LOG(LogTemp, Warning, TEXT("Activate Rift: %s"), *Rift->RiftID.ToString());
                    Rift->SetActorHiddenInGame(false);
                    Rift->SetActorEnableCollision(true);
                }
                else
                {
                    // 다른 균열은 비활성화
                    Rift->SetActorHiddenInGame(true);
                    Rift->SetActorEnableCollision(false);
                }
            }
        }
    }
}

void AQuestManager::CompleteQuest()
{
    if (!QuestDataTable) return;

    // 현재 퀘스트 완료 후 다음 퀘스트 찾기
    TArray<FName> RowNames = QuestDataTable->GetRowNames();
    int32 CurrentIndex = RowNames.Find(CurrentQuestID);

    if (CurrentIndex != INDEX_NONE && CurrentIndex + 1 < RowNames.Num())
    {
        StartQuest(RowNames[CurrentIndex + 1]);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No More Quest!"));
    }

}

void AQuestManager::OnRiftDestroyed()
{
    UE_LOG(LogTemp, Warning, TEXT("Complete Quest!"));
    CompleteQuest();
}


