// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Prog_2_Compulsory_1 : ModuleRules
{
	public Prog_2_Compulsory_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
