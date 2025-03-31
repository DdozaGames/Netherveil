// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Quest/QuestData.h"
#include "QuestManager.generated.h"

class ANetherveilPlayer;

UCLASS()
class NETHERVEIL_API AQuestManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuestManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UDataTable* QuestDataTable;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void StartQuest(FName QuestID);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest();

	FName RiftID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	class ANetherveilPlayer* player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	class ARift* currentRift;

	bool bStartQuest = false;

private:
	FName CurrentQuestID;

	UFUNCTION()
	void OnRiftDestroyed();
};
