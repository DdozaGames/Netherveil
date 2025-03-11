// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyFSM_Spider.h"

#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "Enemy/EnemyAnim_Spider.h"
#include "Enemy/EnemySpider.h"
#include "Player/NetherveilPlayer.h"

void UEnemyFSM_Spider::BeginPlay()
{
	Super::BeginPlay();
	me = Cast<AEnemySpider>(GetOwner());
	anim = Cast<UEnemyAnim_Spider>(me->GetMesh()->GetAnimInstance());
}

void UEnemyFSM_Spider::AttackState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		UE_LOG(LogTemp, Warning, TEXT(" UEnemyFSM_Spider::Attack!"));
		currentTime = 0;
		//PlayAttack();
		anim->bAttackPlay = true;
		anim->bAttackEnd = false;
	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange && anim->bAttackEnd)
	{
		currentState = EEnemyState::Move;
		anim->animState = currentState;

	}
}

void UEnemyFSM_Spider::OnDamageProcess()
{
	UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM_Spider::OnDamageProcess()!"));

	hp--;

	if (hp > 0)
	{
		currentState = EEnemyState::Damage;

		currentTime = 0;

		/*int32 index = FMath::RandRange(0, 1);
		FString sectionName = FString::Printf(TEXT("Damage%d"), index);
		anim->PlayDamageAnim(FName(*sectionName));*/

	}
	else
	{
		currentState = EEnemyState::Die;

		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		/*anim->PlayDamageAnim(TEXT("Die"));*/

		UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM_Spider:: Die"));

	}
	anim->animState = currentState;
	ai->StopMovement();
}


