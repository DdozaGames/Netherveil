// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyFSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle,
	Move,
	Attack,
	Damage,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NETHERVEIL_API UEnemyFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	UEnemyFSM();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = FSM)
	EEnemyState currentState = EEnemyState::Idle;

	virtual void IdleState();
	virtual void MoveState();
	virtual void AttackState();
	virtual void DamageState();
	virtual void DieState();

	UPROPERTY(EditDefaultsOnly, Category = FSM)
	float idleDelayTime = 2.0f;
	float currentTime = 0;

	UPROPERTY(VisibleAnywhere, Category = FSM)
	class ANetherveilPlayer* target;

	UPROPERTY()
	class AEnemy* me;

	UPROPERTY()
	class UEnemyAnim* anim;

	UPROPERTY()
	class AAIController* ai;

	//=========================Attack============================


	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 250.0f;

	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 3.0f;

	void PlayAttack();

	//=========================Damage==============================
	virtual void OnDamageProcess();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	int32 hp = 3;

	UPROPERTY(EditAnywhere, Category = FSM)
	float damageDelayTime = 2.0f;

	//=============================Item===============================

	//아이템 드랍
	void DropItem();

	UPROPERTY(EditDefaultsOnly, Category = Item)
	TSubclassOf<class AHealthItem> healthItemFactory;

	UPROPERTY(EditDefaultsOnly, Category = Item)
	TSubclassOf<class AAmmoItem> grenadeAmmoItemFactory;

	UPROPERTY(EditDefaultsOnly, Category = Item)
	TSubclassOf<class AAmmoItem> sniperAmmoItemFactory;
};
