// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectsGameMode.h"
#include "MyProjectsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyProjectsGameMode::AMyProjectsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
