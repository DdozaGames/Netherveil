

#include "Enemy/Enemy.h"

#include "Enemy/EnemyFSM.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	fsm = CreateDefaultSubobject<UEnemyFSM>(TEXT("FSM"));
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

