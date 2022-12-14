#pragma once
#include "CoreMinimal.h"
#include "EGopTextType.generated.h"

UENUM(BlueprintType)
enum class EGopTextType : uint8 {
    GOP_TEXT_ABILITY,
    GOP_TEXT_ACCESSARY,
    GOP_TEXT_BATTLE,
    GOP_TEXT_BTNGUIDE,
    GOP_TEXT_CHARACTER_HISTORY,
    GOP_TEXT_CHARACTER_PROFILE,
    GOP_TEXT_COMMON,
    GOP_TEXT_EVENTOVERVIEW,
    GOP_TEXT_HELP,
    GOP_TEXT_INFORMATION,
    GOP_TEXT_ITEM,
    GOP_TEXT_JOB,
    GOP_TEXT_NOTE,
    GOP_TEXT_QUEST,
    GOP_TEXT_SCENARIO_TALK,
    GOP_TEXT_SYSTEM_MESSAGE,
    GOP_TEXT_WEAPON,
    GOP_TEXT_TUTORIAL,
    GOP_TEXT_STORYCHART,
    GOP_TEXT_COUNT,
    GOP_TEXT_MAX UMETA(Hidden),
};

