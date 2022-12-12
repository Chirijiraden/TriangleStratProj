using UnrealBuildTool;

public class TRIANGLE_STRATEGYEditorTarget : TargetRules {
	public TRIANGLE_STRATEGYEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ADSound",
			"Newera",
			"SequenceCamera",
		});
	}
}
