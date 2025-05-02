

#include "Enemy/EnemyPool_Spider.h"

#include "Enemy/EnemyFSM.h"

AEnemyPool_Spider::AEnemyPool_Spider()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyPool_Spider::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < PoolSize; ++i)
	{
		AActor* Enemy = GetWorld()->SpawnActor<AActor>(SpiderFactory, FVector::ZeroVector, FRotator::ZeroRotator);
		auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("FSM"));
		auto enemyFSM = Cast<UEnemyFSM>(fsm);
		Enemy->SetActorHiddenInGame(true);
		Enemy->SetActorEnableCollision(false);
		Enemy->SetActorTickEnabled(false);
		enemyFSM->SetComponentTickEnabled(false);
		Pool_Spider.Add(Enemy);
	}
}

AActor* AEnemyPool_Spider::GetSpider()
{
	for (AActor* Enemy : Pool_Spider)
	{
		if (!Enemy->IsActorTickEnabled())
		{
			auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("FSM"));
			auto enemyFSM = Cast<UEnemyFSM>(fsm);
			Enemy->SetActorHiddenInGame(false);
			Enemy->SetActorEnableCollision(true);
			Enemy->SetActorTickEnabled(true);
			enemyFSM->SetComponentTickEnabled(true);

			return Enemy;
		}
	}
	return nullptr;
}

void AEnemyPool_Spider::ReturnEnemy(AActor* Enemy)
{
	if (Enemy)
	{
		auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("FSM"));
		auto enemyFSM = Cast<UEnemyFSM>(fsm);
		Enemy->SetActorHiddenInGame(true);
		Enemy->SetActorEnableCollision(false);
		Enemy->SetActorTickEnabled(false);
		enemyFSM->SetComponentTickEnabled(false);
	}
}


