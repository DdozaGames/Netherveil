// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyPool_Shroudfiend.h"

#include "Enemy/EnemyFSM.h"

AEnemyPool_Shroudfiend::AEnemyPool_Shroudfiend()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyPool_Shroudfiend::BeginPlay()
{
	Super::BeginPlay();
	
	for (int i = 0; i < PoolSize; ++i)
	{
		AActor* Enemy = GetWorld()->SpawnActor<AActor>(DarkShroudfiendFactory, FVector::ZeroVector, FRotator::ZeroRotator);
		auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("FSM"));
		auto enemyFSM = Cast<UEnemyFSM>(fsm);
		Enemy->SetActorHiddenInGame(true);
		Enemy->SetActorEnableCollision(false);
		Enemy->SetActorTickEnabled(false);
		enemyFSM->SetComponentTickEnabled(false);
		Pool_DarkShroudfiend.Add(Enemy);
	}

	for (int i = 0; i < PoolSize; ++i)
	{
		AActor* Enemy = GetWorld()->SpawnActor<AActor>(WhiteShroudfiendFactory, FVector::ZeroVector, FRotator::ZeroRotator);
		auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("FSM"));
		auto enemyFSM = Cast<UEnemyFSM>(fsm);
		Enemy->SetActorHiddenInGame(true);
		Enemy->SetActorEnableCollision(false);
		Enemy->SetActorTickEnabled(false);
		enemyFSM->SetComponentTickEnabled(false);
		Pool_WhiteShroudfiend.Add(Enemy);
	}
}


AActor* AEnemyPool_Shroudfiend::GetDarkShroudfiend()
{
	for (AActor* Enemy : Pool_DarkShroudfiend)
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

AActor* AEnemyPool_Shroudfiend::GetWhiteShroudfiend()
{
	for (AActor* Enemy : Pool_WhiteShroudfiend)
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

void AEnemyPool_Shroudfiend::ReturnEnemy(AActor* Enemy)
{
	if(Enemy)
	{
		auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("FSM"));
		auto enemyFSM = Cast<UEnemyFSM>(fsm);
		Enemy->SetActorHiddenInGame(true);
		Enemy->SetActorEnableCollision(false);
		Enemy->SetActorTickEnabled(false);
		enemyFSM->SetComponentTickEnabled(false);
	}
}




