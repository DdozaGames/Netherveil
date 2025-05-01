// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <functional>

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
	//초기화 완료 여부 
	bool bIsReady = false;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = FSM)
	EEnemyState currentState = EEnemyState::Idle;
	TMap<EEnemyState, TFunction<void()>> StateActions;

	void ChangeState(EEnemyState NewState);

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

	//========================Move===============================
	FVector randomPos;

	bool GetRandomPositionInNavMesh(FVector centerLocation, float radius, FVector& dest);

	float pathUpdateTime = 1.0f; // r길찾기 업데이트 간격
	float timeSinceLastPath = 0.0f;

	//=========================Attack============================


	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 250.0f;

	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 3.0f;

	

	//=========================Damage==============================
	virtual void OnDamageProcess(float amount);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	float hp = 1.0;

	UPROPERTY(EditAnywhere, Category = FSM)
	float damageDelayTime = 2.0f;

	//오브젝트 풀링 활성화 전 초기화
	void InitializeState();

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
