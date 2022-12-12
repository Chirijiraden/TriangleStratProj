#pragma once
#include "CoreMinimal.h"
#include "EOptionCategory.generated.h"

UENUM(BlueprintType)
enum class EOptionCategory : uint8 {
    GAME,
    CAMERA,
    BATTLE,
    GRAPHIC,
    SOUND,
    CONTROLLER,
    KEYBOARD,
    MOUSE,
};

