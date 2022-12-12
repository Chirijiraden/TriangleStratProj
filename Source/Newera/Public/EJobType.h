#pragma once
#include "CoreMinimal.h"
#include "EJobType.generated.h"

UENUM(BlueprintType)
enum class EJobType : uint8 {
    NONE,
    TEST_CLASS,
    SWORDSMAN,
    GUARDIAN,
    LANCER,
    ARCHER,
    WIZARD,
    CLERIC,
    SHAMAN,
    SOLDIER,
};

