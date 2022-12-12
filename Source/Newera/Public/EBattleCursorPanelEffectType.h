#pragma once
#include "CoreMinimal.h"
#include "EBattleCursorPanelEffectType.generated.h"

UENUM(BlueprintType)
enum class EBattleCursorPanelEffectType : uint8 {
    NONE,
    DEFAULT,
    FRIEND,
    ENEMY,
    DEBUG,
};

