// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyFSM.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnim.generated.h"


UCLASS()
class NETHERVEIL_API UEnemyAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = FSM)
	EEnemyState animState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bAttackPlay = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bAttackEnd = true;

	UFUNCTION(BlueprintImplementableEvent, Category = FSMEvent)
	void PlayAttackAnim(FName sectionName);

	UFUNCTION(BlueprintCallable, Category = FSMEvent)
	void OnEndAttackAnimation();

	UFUNCTION(BlueprintImplementableEvent, Category = FSMEvent)
	void PlayDamageAnim(FName sectionName);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bDieDone = false;

};
