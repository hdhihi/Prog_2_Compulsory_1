// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prog_2_Compulsory_1GameMode.h"
#include "Prog_2_Compulsory_1Character.h"
#include "UObject/ConstructorHelpers.h"

AProg_2_Compulsory_1GameMode::AProg_2_Compulsory_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
