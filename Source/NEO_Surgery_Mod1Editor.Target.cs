// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class NEO_Surgery_Mod1EditorTarget : TargetRules
{
	public NEO_Surgery_Mod1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("NEO_Surgery_Mod1");
	}
}
