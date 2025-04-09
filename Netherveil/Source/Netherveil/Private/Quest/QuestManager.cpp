

#include "Quest/QuestManager.h"

#include "Enemy/Enemy.h"
#include "Enemy/EnemyBoss.h"
#include "Enemy/EnemyFSM.h"
#include "Enemy/EnemySpawner.h"
#include "Kismet/GameplayStatics.h"
#include "Netherveil/NetherveilGameMode.h"
#include "Player/NetherveilPlayer.h"
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
    auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), ANetherveilPlayer::StaticClass());
    player = Cast<ANetherveilPlayer>(actor);
}

void AQuestManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (player)
    {
        if (currentRift && bStartQuest)
        {
            player->questProgress = currentRift->riftCurrentHP / currentRift->riftInitialHP;
        }
       
    }

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
            	//  현재 퀘스트의 목표 균열만 활성화
                if (Rift->RiftID == Quest->TargetRiftID)
                {
                    //==============================델리게이트 바인딩==================================

                    //균열 파괴 시 퀘스트 매니저 호출
                    //적 스폰 중지
                    Rift->OnRiftDestroyed.AddDynamic(this, &AQuestManager::OnStopSpawningEnemies);
                    //레벨 내 모든 적 destroy
                    Rift->OnRiftDestroyed.AddDynamic(this, &AQuestManager::OnDestroyAllEnemies);
                    //다음 퀘스트 활성화 
                    Rift->OnRiftDestroyed.AddDynamic(this, &AQuestManager::OnRiftDestroyed);

                    //==================================================================================

                    UE_LOG(LogTemp, Warning, TEXT("Activate Rift: %s"), *Rift->RiftID.ToString());
                    Rift->SetActorHiddenInGame(false);
                    Rift->SetActorEnableCollision(true);
                    this->RiftID = Rift->RiftID;
                    currentRift = Cast<ARift>(Rift);
                    bStartQuest = true;
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
        player->bAllQuestsDone = true;
    }

}

void AQuestManager::OnRiftDestroyed()
{
    UE_LOG(LogTemp, Warning, TEXT("Complete Quest!"));

    
    if (player)
    {
        player->CompleteQuestUI(RiftID);
        UE_LOG(LogTemp, Warning, TEXT("player->CompleteQuestUI"));
    }
    CompleteQuest();
}

void AQuestManager::OnStopSpawningEnemies()
{
    //균열 파괴 시 적 스폰 중지
    auto gameMode = Cast<ANetherveilGameMode>(UGameplayStatics::GetGameMode(this));
    gameMode->StopSpawning();
}

void AQuestManager::OnDestroyAllEnemies()
{
    TArray<AActor*> FoundEnemies;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy::StaticClass(), FoundEnemies);

    for (AActor* EnemyActor : FoundEnemies)
    {
        AEnemy* Enemy = Cast<AEnemy>(EnemyActor);
        if (!Enemy || Enemy->IsPendingKill()) continue;

        if (Enemy->IsA<AEnemyBoss>()) continue; // 보스 제외
        // FSM 컴포넌트 가져오기
        UEnemyFSM* FSM = Enemy->FindComponentByClass<UEnemyFSM>();
        if (FSM)
        {
            FSM->OnDamageProcess(10000.0);
            
        }
    }
}


