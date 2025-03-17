

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
        UE_LOG(LogTemp, Warning, TEXT("퀘스트 시작: %s"), *Quest->QuestName.ToString());

        CurrentQuestID = QuestID;

        // 균열 찾기
        TArray<AActor*> FoundRifts;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), Quest->TargetRift, FoundRifts);

        if (FoundRifts.Num() > 0)
        {
            ARift* TargetRift = Cast<ARift>(FoundRifts[0]);
            if (TargetRift)
            {
                UE_LOG(LogTemp, Warning, TEXT("균열 파괴 이벤트"));
                // 균열 파괴 이벤트 연결
                //TargetRift->OnRiftDestroyed.AddDynamic(this, &AQuestManager::OnRiftDestroyed);
            }
        }
    }
}

void AQuestManager::CompleteQuest()
{

}

void AQuestManager::OnRiftDestroyed()
{
}


