﻿using UnrealBuildTool;

public class TRIANGLE_STRATEGYTarget : TargetRules {
	public TRIANGLE_STRATEGYTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ADSound",
			"Newera",
			"SequenceCamera",
		});
	}
}
