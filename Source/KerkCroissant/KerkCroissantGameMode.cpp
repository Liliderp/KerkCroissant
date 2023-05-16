// Copyright Epic Games, Inc. All Rights Reserved.

#include "KerkCroissantGameMode.h"
#include "KerkCroissantCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKerkCroissantGameMode::AKerkCroissantGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
