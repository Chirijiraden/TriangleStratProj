#pragma once
#include "CoreMinimal.h"
#include "ENeweraPerStepInfoFlag.generated.h"

UENUM(BlueprintType)
enum class ENeweraPerStepInfoFlag : uint8 {
    NONE,
    JUMP,
    SHORTCUT,
    DIE = 0x4,
    ZIPLINE = 0x8,
    HARPOON = 0x10,
    LADDER = 0x20,
    DOOR = 0x40,
    TROLLEY = 0x80,
    JUMP_SMALL = 0x100,
    JUMP_VIRTICAL = 0x200,
    JUMP_HORIZONTAL = 0x400,
    WARPPOINTS = 0xF8,
    ALL = 0xFFFF,
};

