// Copyright Epic Games, Inc. All Rights Reserved.

#include "IceCubeGameMode.h"
#include "IceCubeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIceCubeGameMode::AIceCubeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
