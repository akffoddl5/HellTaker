// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HellTaker : ModuleRules
{
	public HellTaker(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Paper2D" });
	}
}
