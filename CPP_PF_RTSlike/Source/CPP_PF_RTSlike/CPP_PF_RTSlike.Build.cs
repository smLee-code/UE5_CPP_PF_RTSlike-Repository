// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_PF_RTSlike : ModuleRules
{
	public CPP_PF_RTSlike(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
