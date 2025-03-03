// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetherveilGameMode.h"
#include "NetherveilCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetherveilGameMode::ANetherveilGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
