// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Netherveil : ModuleRules
{
	public Netherveil(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
