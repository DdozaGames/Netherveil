#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NetherveilPlayer.generated.h"

UCLASS()
class NETHERVEIL_API ANetherveilPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	ANetherveilPlayer();

protected:
	
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* springArmComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	class UCameraComponent* CamComp;

	//플레이어 마우스 조작 
	void Turn(float value);
	void LookUp(float value);

	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 600;

	UPROPERTY(VisibleAnywhere, Category = PlayerSetting)
	float SprintSpeedMultiplier = 2.0f;

	FVector direction;

	//플레이어 이동 맵핑
	void InputHorizontal(float value);
	void InputVertical(float value);
	void InputJump();
	void Sprint();
	void StopSprinting();

	//------------------------Move------------------------------
	void Move();
};
