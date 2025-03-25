// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyAttackBullet.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Player/NetherveilPlayer.h"

// Sets default values
AEnemyAttackBullet::AEnemyAttackBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//충돌체 
	collisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	collisionComp->SetSphereRadius(13);
	RootComponent = collisionComp;

	//외관
	bodyMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMeshComp"));
	bodyMeshComp->SetupAttachment(collisionComp);
	bodyMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	bodyMeshComp->SetRelativeScale3D(FVector(0.25f));

	//발사체
	movementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComp"));
	movementComp->SetUpdatedComponent(collisionComp);
	movementComp->InitialSpeed = 2500;
	movementComp->MaxSpeed = 2500;
	movementComp->bShouldBounce = true; //반동여부
	movementComp->Bounciness = 0.3f; //반동 값

	//생명 시간 주기
	InitialLifeSpan = 2.0f;
}

// Called when the game starts or when spawned
void AEnemyAttackBullet::BeginPlay()
{
	Super::BeginPlay();
	collisionComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemyAttackBullet::OnBeginOverlap);
}

// Called every frame
void AEnemyAttackBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyAttackBullet::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto player = Cast<ANetherveilPlayer>(OtherActor);
	if (player)
	{
		player->OnHitEvent();
		this->Destroy();
	}
}

