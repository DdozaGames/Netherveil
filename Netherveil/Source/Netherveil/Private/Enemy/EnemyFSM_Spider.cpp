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
	if (me)
	{
		anim = Cast<UEnemyAnim_Spider>(me->GetMesh()->GetAnimInstance());
		ai = Cast<AAIController>(me->GetController());
	}
	attackRange = 1500.f;
	attackDelayTime = 5.0f;
	hp = 1800.0f;
}

void UEnemyFSM_Spider::AttackState()
{
	Super::AttackState();
	
	FVector Direction = (target->GetActorLocation() - me->GetActorLocation()).GetSafeNormal();

	FRotator NewRotation = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewRotation.Pitch = 0.0f;  // 상하 기울기 방지 (필요 시 제거)
	NewRotation.Roll = 0.0f;   // 롤 방지

	me->SetActorRotation(NewRotation);
}

void UEnemyFSM_Spider::OnDamageProcess(float amount)
{
	//UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM_Spider::OnDamageProcess()!"));

	hp-=amount;
	me->DisplayDamageUI(amount);

	if (hp > 0)
	{
		currentState = EEnemyState::Damage;

		currentTime = 0;

		
		FString sectionName = FString::Printf(TEXT("Damage"));
		anim->PlayDamageAnim(FName(*sectionName));

	}
	else
	{
		currentState = EEnemyState::Die;

		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		anim->PlayDamageAnim(TEXT("Die"));

		UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM_Spider:: Die"));

	}
	anim->animState = currentState;
	ai->StopMovement();
}


