// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyFSM_ShroudfiendMelee.h"
#include "Enemy/Enemy.h"
#include "Enemy/EnemyAnim.h"
#include "Enemy/EnemyShroudfiendMelee.h"
#include "Kismet/GameplayStatics.h"
#include "Player/NetherveilPlayer.h"
#include "Runtime/AIModule/Classes/AIController.h"

void UEnemyFSM_ShroudfiendMelee::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<AEnemyShroudfiendMelee>(GetOwner());
	hp = 300.0f;
}

