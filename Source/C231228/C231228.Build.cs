// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C231228 : ModuleRules
{
	public C231228(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
