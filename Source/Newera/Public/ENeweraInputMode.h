#pragma once
#include "CoreMinimal.h"
#include "ENeweraInputMode.generated.h"

UENUM(BlueprintType)
enum class ENeweraInputMode : uint8 {
    GameUI,
    GamePlay,
    WorldMap,
    DebugMenu,
    NoInput,
    OnStage,
    DebugConsole,
    DebugCursor,
    DebugCamera,
    AIInput,
    OnFastForward,
    OnResearchEnd,
    SoundTest,
    WaitTutorial,
    EventSkipUI,
};

