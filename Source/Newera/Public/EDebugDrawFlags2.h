#pragma once
#include "CoreMinimal.h"
#include "EDebugDrawFlags2.generated.h"

UENUM(BlueprintType)
enum class EDebugDrawFlags2 : uint8 {
    DrawUnitDirection,
    HideWorldMapNarration,
    HideCommonBtnGuide,
    ForceHideCommonBtnGuide,
    DrawUnitVoteParam,
    DrawSelectParam,
    ScrollText,
    DrawBattleLimitTurn,
    DrawCharacterAttachedEffectSpawnLocation,
    ForceHideUMG,
    Hide3DUI,
    DrawInputMouse,
    DebugActionFlagsEnd,
};

