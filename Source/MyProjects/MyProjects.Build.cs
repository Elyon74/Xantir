// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProjects : ModuleRules
{
	public MyProjects(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
