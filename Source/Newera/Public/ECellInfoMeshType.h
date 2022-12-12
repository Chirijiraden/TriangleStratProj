#pragma once
#include "CoreMinimal.h"
#include "ECellInfoMeshType.generated.h"

UENUM()
enum class ECellInfoMeshType : uint16 {
    NONE,
    GRIDEDGE,
    MOVABLE,
    CENTER = 0x4,
    ATTACKABLE = 0x8,
    MOVABLE_DANGER = 0x10,
    EFFECTABLE = 0x20,
    PREDICTION_ATTACK = 0x40,
    PREDICTION_MOVE = 0x80,
    MOVE_ROUTE = 0x100,
    PARMANENT_VICTORY = 0x200,
    EVENT = 0x400,
    EVENT2 = 0x800,
    INITIAL_START = 0x1000,
    OPTIONAL_MOVABLE = 0x2000,
    LIGHTNING_PATH = 0x4000,
    ALL = 0xFFFF,
};

