#pragma once
#include "CoreMinimal.h"
#include "ENeweraGameButton.generated.h"

UENUM(BlueprintType)
enum class ENeweraGameButton : uint8 {
    Up,
    Down,
    Left,
    Right,
    UpBtnOnly,
    DownBtnOnly,
    LeftBtnOnly,
    RightBtnOnly,
    ChangeLeft,
    ChangeRight,
    SimpleHpBar,
    CameraChange,
    CameraZoomIn,
    CameraZoomOut,
    CameraReset,
    Decide,
    Cancel,
    Persuasion,
    Standby,
    CheckPointDecide,
    CheckPointCancel,
    BattleOrderMenu,
    BattleCursorFocusChangeNext,
    BattleCursorFocusChangePrev,
    BattleItemTypeSelectUp,
    BattleItemTypeSelectDown,
    UnitDetail,
    UnitList,
    AccessoryEquip,
    UnitListZL,
    UnitListZR,
    Walking,
    ResearchMemo,
    ResearchEnd,
    FastForward,
    EventSkip,
    EventAutoMode,
    Option,
    ActionInfo,
    Menu,
    WorldMapActivateEncampmentEventMenu,
    WorldMapSkipNarration,
    DebugMenu,
    DebugConsole,
    DebugCamera,
    ShiftRefLR,
    ShiftRefFB,
    RefUp,
    RefDown,
    DebugCamSlow,
    DebugCamLandOn,
    SwitchAbilityList,
    SetDefaultSetting,
    OpenCharacterInfo,
    OpenBackLog,
    OpenBackLogOnResearch,
    OpenBackLogOnWorldMap,
    ToggleCommonBtnGuide,
    PushAnyKey,
    SoundTestPlay,
    SoundTestStop,
    SoundTestChangeCategoryL,
    SoundTestChangeCategoryR,
    SoundTestChangeMenuL,
    SoundTestChangeMenuR,
    DebugPlus,
    DebugMinus,
    UnitListToggleSortie,
    UnitListExchageUnitDecide,
    UnitListCallUnitDetail_ExchangeUnit,
    UnitDetailToggleSortie,
    UnitDetailHelp,
    UnitDetailExchageUnitDecide_MapUnit,
    UnitDetailExchageUnitDecide_ListUnit,
    Num,
};

