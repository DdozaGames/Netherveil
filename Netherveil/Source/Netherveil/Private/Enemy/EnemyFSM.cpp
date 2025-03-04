
#include "Enemy/EnemyFSM.h"

#include "Components/CapsuleComponent.h"
#include "Enemy/Enemy.h"
#include "Enemy/EnemyAnim.h"
#include "Kismet/GameplayStatics.h"
#include "Player/NetherveilPlayer.h"
#include "Runtime/AIModule/Classes/AIController.h"

UEnemyFSM::UEnemyFSM()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UEnemyFSM::BeginPlay()
{
	Super::BeginPlay();

	auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), ANetherveilPlayer::StaticClass());
	target = Cast<ANetherveilPlayer>(actor);
	me = Cast<AEnemy>(GetOwner());

	anim = Cast<UEnemyAnim>(me->GetMesh()->GetAnimInstance());

	ai = Cast<AAIController>(me->GetController());
}


void UEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	switch (currentState)
	{
	case EEnemyState::Idle:
		IdleState();
		break;
	case EEnemyState::Move:
		MoveState();
		break;
	case EEnemyState::Attack:
		AttackState();
		break;
	case EEnemyState::Damage:
		DamageState();
		break;
	case EEnemyState::Die:
		DieState();
		break;

	}
}

void UEnemyFSM::IdleState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;

	if (currentTime > idleDelayTime)
	{
		currentState = EEnemyState::Move;
		currentTime = 0;

		anim->animState = currentState;
	}
}

void UEnemyFSM::MoveState()
{
	FVector destination = target->GetActorLocation();
	FVector dir = destination - me->GetActorLocation();
	//me->AddMovementInput(dir.GetSafeNormal());
	ai->MoveToLocation(destination);


	if(dir.Size() < attackRange)
	{
		ai->StopMovement();
		currentState = EEnemyState::Attack;
		anim->animState = currentState;
		anim->bAttackPlay = true;
		currentTime = attackDelayTime;
	}
}

void UEnemyFSM::AttackState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attack!"));
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

void UEnemyFSM::DamageState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	//UE_LOG(LogTemp, Warning, TEXT("DamageState!"));

	if (currentTime > damageDelayTime)
	{
		currentState = EEnemyState::Idle;
		currentTime = 0;
		anim->animState = currentState;
	}
}

void UEnemyFSM::DieState()
{
	//아직 죽음 애니메이션 끝나지 않았다면
	if (anim->bDieDone == false)
	{
		return;
	}
	me->Destroy();
}

void UEnemyFSM::OnDamageProcess()
{
	hp--;

	if (hp > 0)
	{
		currentState = EEnemyState::Damage;

		currentTime = 0;

		int32 index = FMath::RandRange(0, 1);
		FString sectionName = FString::Printf(TEXT("Damage%d"), index);
		anim->PlayDamageAnim(FName(*sectionName));
	}
	else
	{
		currentState = EEnemyState::Die;

		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		anim->PlayDamageAnim(TEXT("Die"));
	}
	anim->animState = currentState;
	ai->StopMovement();
}

