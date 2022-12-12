using UnrealBuildTool;

public class Newera : ModuleRules {
    public Newera(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ADSound",
            "AudioMixer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DeveloperSettings",
            "Engine",
            "GameplayCameras",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "Paper2D",
            "PropertyPath",
            "SequenceCamera",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
        });
    }
}
