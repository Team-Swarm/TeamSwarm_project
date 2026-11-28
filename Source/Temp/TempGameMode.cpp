// Copyright Epic Games, Inc. All Rights Reserved.

#include "TempGameMode.h"
#include "TempCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATempGameMode::ATempGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
