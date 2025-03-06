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

	//auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), ANetherveilPlayer::StaticClass());
	//target = Cast<ANetherveilPlayer>(actor);
	me = Cast<AEnemyShroudfiendMelee>(GetOwner());

	//anim = Cast<UEnemyAnim>(me->GetMesh()->GetAnimInstance());

	//ai = Cast<AAIController>(me->GetController());
}

void UEnemyFSM_ShroudfiendMelee::AttackState()
{
	//Super::AttackState();

	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		UE_LOG(LogTemp, Warning, TEXT("Melee Attack!"));
		currentTime = 0;
		anim->bAttackPlay = true;
	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange)
	{
		currentState = EEnemyState::Move;
		anim->animState = currentState;
	}
}

void UEnemyFSM_ShroudfiendMelee::OnDamageProcess()
{
	Super::OnDamageProcess();
	//UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM_ShroudfiendMelee::OnDamageProcess()!"));
}
