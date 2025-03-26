// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/EnemyAnim.h"
#include "EnemyAnimBoss.generated.h"

/**
 * 
 */
UCLASS()
class NETHERVEIL_API UEnemyAnimBoss : public UEnemyAnim
{
	GENERATED_BODY()

public:
	
	virtual void OnEndAttackAnimation() override;

	UFUNCTION(BlueprintImplementableEvent, Category = FSMEvent)
	void PlayAttackWaitAnim(FName sectionName);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bAttackWaitEnd = true;
};
