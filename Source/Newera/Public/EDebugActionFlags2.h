#pragma once
#include "CoreMinimal.h"
#include "EDebugActionFlags2.generated.h"

UENUM(BlueprintType)
enum class EDebugActionFlags2 : uint8 {
    EnableLevelUpAtExpUp,
    AllPartyMembersAvailable,
    AllPartyMembersMaxPower,
    AllQestBattleOpened,
    DisableTutorial,
    EnableAIAssert,
    OutputBattleHitRateLog,
    DebugActionFlagsEnd,
};

