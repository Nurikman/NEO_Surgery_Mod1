// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NEO_Surgery_Mod1GameMode.h"
#include "NEO_Surgery_Mod1HUD.h"
#include "NEO_Surgery_Mod1Character.h"
#include "UObject/ConstructorHelpers.h"

ANEO_Surgery_Mod1GameMode::ANEO_Surgery_Mod1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANEO_Surgery_Mod1HUD::StaticClass();
}
