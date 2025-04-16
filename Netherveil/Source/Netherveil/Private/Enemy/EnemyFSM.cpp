
#include "Enemy/EnemyFSM.h"

#include "Components/CapsuleComponent.h"
#include "Enemy/Enemy.h"
#include "Enemy/EnemyAnim.h"
#include "Item/AmmoItem.h"
#include "Item/HealthItem.h"
#include <NavigationSystem.h>
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"
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

		if (target && anim && ai)
		{
			bIsReady = true; // FSM 작동 준비 완료
		}
	}
}


void UEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsReady) return;

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
	if (!IsValid(target) || !IsValid(me) || !IsValid(ai) || !IsValid(anim))
	{
		UE_LOG(LogTemp, Error, TEXT("IdleState(): component is nullptr"));
		return;
	}

	currentTime += GetWorld()->DeltaTimeSeconds;
	//UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM::IdleState()"));

	if (currentTime > idleDelayTime)
	{
		currentState = EEnemyState::Move;
		currentTime = 0;

		if (anim)
		{
			anim->animState = currentState;
		}

		GetRandomPositionInNavMesh(me->GetActorLocation(), 500, randomPos);
	}
}

void UEnemyFSM::MoveState()
{
	//UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM::MoveState()"));
	if (!IsValid(target) || !IsValid(me) || !IsValid(ai) || !IsValid(anim))
	{
		UE_LOG(LogTemp, Error, TEXT("MoveState(): component is nullptr"));
		return;
	}

	FVector destination = target->GetActorLocation();
	FVector dir = destination - me->GetActorLocation();
	//me->AddMovementInput(dir.GetSafeNormal());

	//NavigationSystem 객체 얻어오기
	auto ns = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	//목적지 길 찾기 경로 데이터 검색
	FPathFindingQuery query;
	FAIMoveRequest req;

	//목적지에서 인지할 수 있는 범위
	req.SetAcceptanceRadius(3);
	req.SetGoalLocation(destination);
	//길 찾기를 위한 쿼리 생성
	ai->BuildPathfindingQuery(req, query);
	//길 찾기 결과 가져오기
	FPathFindingResult r = ns->FindPathSync(query);

	if (r.Result==ENavigationQueryResult::Success)
	{
		ai->MoveToLocation(destination);
	}
	else
	{
		auto result = ai->MoveToLocation(randomPos);
		if (result == EPathFollowingRequestResult::AlreadyAtGoal)
		{
			GetRandomPositionInNavMesh(me->GetActorLocation(), 500, randomPos);
		}
	}

	if(dir.Size() < attackRange )
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

		GetRandomPositionInNavMesh(me->GetActorLocation(), 500, randomPos);

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


bool UEnemyFSM::GetRandomPositionInNavMesh(FVector centerLocation, float radius, FVector& dest)
{
	auto ns = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	FNavLocation loc;
	bool result = ns->GetRandomReachablePointInRadius(centerLocation, radius, loc);
	dest = loc.Location;
	return result;
}

void UEnemyFSM::OnDamageProcess(float amount)
{
	hp -= amount;
	me->DisplayDamageUI(amount);

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
	///UE_LOG(LogTemp, Warning, TEXT("UEnemyFSM::DropItem()"));
	int randNum = rand() % 100;
	FTransform itemPosition = me->GetActorTransform();

	FVector adjustedLocation = itemPosition.GetLocation();
	adjustedLocation.Z -= 100.0f;
	itemPosition.SetLocation(adjustedLocation);

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

