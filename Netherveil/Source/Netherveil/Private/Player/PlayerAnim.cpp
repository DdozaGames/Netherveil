// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerAnim.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Player/NetherveilPlayer.h"

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto ownerPawn = TryGetPawnOwner();
	auto player = Cast<ANetherveilPlayer>(ownerPawn);

	if (player)
	{
		FVector velocity = player->GetVelocity();
		FVector forwardVector = player->GetActorForwardVector();
		//speed에 내적 값 할당
		speed = FVector::DotProduct(forwardVector, velocity);

		//좌우 속도 할당
		FVector rightVector = player->GetActorRightVector();
		direction = FVector::DotProduct(rightVector, velocity);

		auto movement = player->GetCharacterMovement();
		isInAir = movement->IsFalling();
	}
}

void UPlayerAnim::PlayAttackAnim()
{

	Montage_Play(attackAnimMontage);

	
}
