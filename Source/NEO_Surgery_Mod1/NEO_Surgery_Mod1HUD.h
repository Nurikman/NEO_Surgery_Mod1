// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NEO_Surgery_Mod1HUD.generated.h"

UCLASS()
class ANEO_Surgery_Mod1HUD : public AHUD
{
	GENERATED_BODY()

public:
	ANEO_Surgery_Mod1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

