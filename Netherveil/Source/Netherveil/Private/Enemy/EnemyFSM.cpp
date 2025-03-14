
#include "Enemy/EnemyFSM.h"

#include "Components/CapsuleComponent.h"
#include "Enemy/Enemy.h"
#include "Enemy/EnemyAnim.h"
#include "Item/AmmoItem.h"
#include "Item/HealthItem.h"
#include "Item/Item.h"
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

	if (me)
	{
		anim = Cast<UEnemyAnim>(me->GetMesh()->GetAnimInstance());
		ai = Cast<AAIController>(me->GetController());
	}
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

		if (anim)
		{
			anim->animState = currentState;
		}
	}
}

void UEnemyFSM::MoveState()
{
	FVector destination = target->GetActorLocation();
	FVector dir = destination - me->GetActorLocation();
	//me->AddMovementInput(dir.GetSafeNormal());
	ai->MoveToLocation(destination);
	//UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM::MoveState()"));

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
		currentTime = 0;
		anim->bAttackPlay = true;
		anim->bAttackEnd = false;
	}

	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	//Attack -> Move 넘어갈 때 공격 애니메이션 다 끝나면 전환되도록
	//anim noitfy 로 제어 
	if (distance > attackRange && anim->bAttackEnd)
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
		currentState = EEnemyState::Move;
		currentTime = 0;
		anim->animState = currentState;
	}
}

void UEnemyFSM::DieState()
{
	//아직 죽음 애니메이션 끝나지 않았다면
	if (anim->bDieDone == false)
	{
		//UE_LOG(LogTemp, Warning, TEXT("DamageState!"));
		return;
	}
	DropItem();
	me->Destroy();
}


void UEnemyFSM::PlayAttack()
{
	//Attack -> Move 넘어갈 때 공격 애니메이션 다 끝나면 전환되도록
	//몽타주로 제어

	//int32 index = FMath::RandRange(0, 1);
	FString sectionName = FString::Printf(TEXT("Attack0"));
	anim->PlayAttackAnim(FName(*sectionName));
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

		//UE_LOG(LogTemp, Warning, TEXT("Die"));

	}
	anim->animState = currentState;
	ai->StopMovement();
}

void UEnemyFSM::DropItem()
{
	UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM::DropItem()"));
	int randNum = rand() % 100;
	FTransform itemPosition = me->GetActorTransform();

	if (!grenadeAmmoItemFactory) {
		UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM::DropItemClass is Null"));
		return;
	}
	if (randNum<50)
	{
		if (randNum<25)
		{
			AAmmoItem* item = GetWorld()->SpawnActor<AAmmoItem>(grenadeAmmoItemFactory, itemPosition);
			if (item)
			{
				item->ammoType = EAmmoType::Grenade;
			}
		}
		else
		{
			AAmmoItem* item = GetWorld()->SpawnActor<AAmmoItem>(sniperAmmoItemFactory, itemPosition);
			if (item)
			{
				item->ammoType = EAmmoType::Sniper;
			}
		}
	}
	else
	{
		GetWorld()->SpawnActor<AHealthItem>(healthItemFactory, itemPosition);
	}
	

}

