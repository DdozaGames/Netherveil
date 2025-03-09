
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
class ANetherveilPlayer;
#include "Item.generated.h"

UCLASS()
class NETHERVEIL_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();

protected:
	virtual void BeginPlay() override;

public:	


	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	//�浹 ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Collision)
	class UBoxComponent* collisionComp;

	//�ܰ� ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = BodyMesh)
	class UStaticMeshComponent* itemMeshComp;

	//�÷��̾ �������� �Ծ��� �� ����
	virtual void OnPickup(ANetherveilPlayer* player);

	//������ ȿ�� ���� 
	virtual void ApplyEffect(ANetherveilPlayer* player);
	
};



