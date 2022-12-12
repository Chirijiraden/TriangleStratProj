#pragma once
#include "CoreMinimal.h"
#include "EDebugActionFlags.generated.h"

UENUM(BlueprintType)
enum class EDebugActionFlags : uint8 {
    StopCelestialSphereTime,
    MapTimeProgress,
    MapTimeSetStarting,
    ResearchModeCameraFree,
    BattleAttackAlwaysHit,
    BattleAttackAlwaysMiss,
    BattleAttackAlwaysDead,
    BattleAttackDamageZero,
    BattleAttackAlwaysCritical,
    BattleForceItemDrop,
    BattleTPMax,
    BattleAIInvalid,
    BattleSkipStartPlay,
    BattleLoopAnother,
    BattleVictory,
    BattleLose,
    BattleCmdRecording,
    DebugDisableWeatherControll,
    BattleAttackAlwaysStatusEffect,
    BattleOutlineRimRight,
    BattleEnableMoveRouteCheckPoint,
    DisableCharDirAdjust,
    FriendlyFire,
    CameraHGridable,
    CameraVGridable,
    AllAbilityAvailable,
    EnableDebugUnitSetting,
    AbilityAlwaysActive,
    AllShopOpened,
    IgnoreClassUpCondition,
    IgnoreStrengthenWeaponCondition,
    DebugActionFlagsEnd,
};

