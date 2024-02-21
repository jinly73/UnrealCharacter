// Copyright Epic Games, Inc. All Rights Reserved.

#include "C231228GameMode.h"
#include "C231228Character.h"
#include "UObject/ConstructorHelpers.h"

AC231228GameMode::AC231228GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
