#pragma once
#include "CoreMinimal.h"
#include "ENeweraStateWorldMap.generated.h"

UENUM(BlueprintType)
enum class ENeweraStateWorldMap : uint8 {
    INVALID,
    NO_OPERATION,
    INITIALIZE,
    INITIALIZE_SECONDARY,
    INITIALIZE_RE,
    TERMINATE,
    END_NARRATION_AND_START_FREE_CURSOR,
    SELECTING_EVENT_PLACE_FREE,
    SELECTING_EVENT_PLACE_DECIDABLE,
    SELECTING_NEXT_EVENT,
    SELECTING_EVENT_PLACE_DECIDABLE_ENCAMPMENT,
    SELECTING_NEXT_EVENT_ENCAMPMENT,
    DECIDE_NEXT_SCENARIO,
    FORCE_NEXT_SCENARIO,
    WAIT_NOTIFY_FROM_LUA,
    GO_TO_STATION,
};
