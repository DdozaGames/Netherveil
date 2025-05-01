// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyFSM_ShroudfiendMelee.h"
#include "Enemy/Enemy.h"
#include "Enemy/EnemyAnim.h"
#include "Enemy/EnemyPool_Shroudfiend.h"
#include "Enemy/EnemyShroudfiendMelee.h"
#include "Kismet/GameplayStatics.h"
#include "Netherveil/NetherveilGameMode.h"
#include "Player/NetherveilPlayer.h"
#include "Runtime/AIModule/Classes/AIController.h"

void UEnemyFSM_ShroudfiendMelee::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<AEnemyShroudfiendMelee>(GetOwner());
	hp = 180.0f;
}

void UEnemyFSM_ShroudfiendMelee::DieState()
{
	Super::DieState();

	if (anim->bDieDone)
	{
		auto gm = Cast<ANetherveilGameMode>(UGameplayStatics::GetGameMode(this));
		if (gm && gm->SharedEnemyPool_Shroudfiend)
		{
			ShroudFiendPool = gm->SharedEnemyPool_Shroudfiend;
			ShroudFiendPool->ReturnEnemy(me);
			InitializeState();
			hp = 180.0f;

		}
	}
	
}

