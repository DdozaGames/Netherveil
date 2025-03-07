// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerAnim.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
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


		//Crosshair와 Muzzle 방향 일치시키기

		//손 위치 가져오기
		LeftHandTransform= player->GetMesh()->GetSocketTransform(FName("hand_l"), RTS_World);
		RightHandTransform = player->granadeGunComp->GetSocketTransform(FName("FirePosition"), RTS_World);

		//  타겟 방향으로 회전 계산
		RightHandRotation = UKismetMathLibrary::FindLookAtRotation(RightHandTransform.GetLocation(), 
			RightHandTransform.GetLocation() + (RightHandTransform.GetLocation() - player->GetHitTarget()));

		//FTransform MuzzleTipTransform = player->granadeGunComp->GetSocketTransform(FName("FirePosition"), RTS_World);
		//FVector MuzzleX(FRotationMatrix(MuzzleTipTransform.GetRotation().Rotator()).GetUnitAxis(EAxis::X));
		//DrawDebugLine(GetWorld(), MuzzleTipTransform.GetLocation(), MuzzleTipTransform.GetLocation() + MuzzleX * 1000.0f, FColor::Blue,false,0.02f,0,5.0f);
		//DrawDebugLine(GetWorld(), MuzzleTipTransform.GetLocation(), player->GetHitTarget(), FColor::Red,false, 0.02f, 0, 5.0f);
	}


}

void UPlayerAnim::PlayAttackAnim()
{

	Montage_Play(attackAnimMontage);

	
}
