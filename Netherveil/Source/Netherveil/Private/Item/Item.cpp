
#include "Item/Item.h"
#include "Components/BoxComponent.h"
#include "Player/NetherveilPlayer.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	//충돌체 
	collisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	RootComponent = collisionComp;

	//외관
	itemMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("itemMeshComp"));
	itemMeshComp->SetupAttachment(collisionComp);
	itemMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	itemMeshComp->SetRelativeScale3D(FVector(0.25f));

}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	collisionComp->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnBeginOverlap);
	
}



void AItem::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto player = Cast<ANetherveilPlayer>(OtherActor);
	if (player)
	{
		OnPickup(player);
	}
}

void AItem::OnPickup(ANetherveilPlayer* player)
{
	//UE_LOG(LogTemp, Warning, TEXT("AItem::OnPickup()"));

	ApplyEffect(player);

	this->Destroy();
}

void AItem::ApplyEffect(ANetherveilPlayer* player)
{
	UE_LOG(LogTemp, Warning, TEXT("AItem::ApplyEffect"));

}


