
#include "Quest/Rift.h"

#include "Components/SphereComponent.h"

ARift::ARift()
{
	PrimaryActorTick.bCanEverTick = true;

	//충돌체 
	collisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	collisionComp->SetSphereRadius(13);
	RootComponent = collisionComp;

	//외관
	bodyMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMeshComp"));
	bodyMeshComp->SetupAttachment(collisionComp);
	bodyMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ARift::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARift::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ARift::DestroyRift()
{
	UE_LOG(LogTemp, Warning, TEXT("Rift is Destroyed!: %s"), *RiftID.ToString());
	collisionComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	OnRiftDestroyed.Broadcast();
	//Destroy();
}

void ARift::TakeDamage()
{
	riftHP--;
	if (riftHP <= 0)
	{
		DestroyRift();
	}
}

