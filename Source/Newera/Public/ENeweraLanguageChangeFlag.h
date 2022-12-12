#pragma once
#include "CoreMinimal.h"
#include "ENeweraLanguageChangeFlag.generated.h"

UENUM(BlueprintType)
enum class ENeweraLanguageChangeFlag : uint8 {
    NONE,
    TEXT,
    VOICE,
    ALL = 0xFF,
};

