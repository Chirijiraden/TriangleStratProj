#pragma once
#include "CoreMinimal.h"
#include "EDebugDrawFlags.generated.h"

UENUM(BlueprintType)
enum class EDebugDrawFlags : uint8 {
    DrawMapTime,
    TalkWindow,
    CharaStatus,
    HideUMG,
    TargetStatus,
    GameStatus,
    Camera,
    LuaStatus,
    LuaTrigger,
    LuaSysGlobal,
    LuaSysInfo,
    LuaGameInfo,
    LuaSysShortNameDisp,
    ActionObject,
    MessageLog,
    WeatherParam,
    UEOutput,
    ActionBar,
    Belongings,
    DrawScreenMessageEnable,
    DrawCameraSequenceFrameTime,
    DrawDebugGridCell,
    DisableDofFlag,
    DrawGridEdge,
    DrawFocusPoint,
    DrawActorHiddenInGame,
    Use3DWidget,
    Scripting,
    MemberList,
    DrawAnalogInput,
    DrawGenderIcon,
    DrawEventName,
    DebugDrawFlagsEnd,
};

