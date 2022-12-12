#pragma once
#include "CoreMinimal.h"
#include "EGopLoadFlag.generated.h"

UENUM(BlueprintType)
enum class EGopLoadFlag : uint8 {
    NONE,
    PRIMARY,
    TEXT,
    VOICE = 0x4,
    UNLOCALIZED = 0x1,
    ALL = 0xFF,
};

