// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyShroudfiendMelee.h"

#include "Enemy/EnemyFSM_ShroudfiendMelee.h"


AEnemyShroudfiendMelee::AEnemyShroudfiendMelee()
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/Asset/Creep/SK_Creep.SK_Creep'"));

	if (tempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(tempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -88), FRotator(0, -90, 0));
	}
}
