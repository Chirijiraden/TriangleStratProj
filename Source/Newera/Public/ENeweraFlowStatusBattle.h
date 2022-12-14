#pragma once
#include "CoreMinimal.h"
#include "ENeweraFlowStatusBattle.generated.h"

UENUM(BlueprintType)
enum class ENeweraFlowStatusBattle : uint8 {
    INVALID,
    INITIALIZE,
    WAIT_PREPARATION,
    BACK_FROM_STATION,
    TRANSITION_TO_BATTLE,
    PRE_START_BATTLESTARTMOVIE,
    CHECK_NEXT_ACTIVE_TURN_BEFORE,
    CHECK_NEXT_ACTIVE_TURN,
    PRE_START_UNIT_TURN,
    START_UNIT_TURN,
    SELECT_MOVEPOSITION,
    DECIDE_SELECT_MOVEPOSITION,
    CANCEL_SELECT_MOVEPOSITION,
    SELECT_ATTACKPOSITION,
    DECIDE_SELECT_ATTACKPOSITION,
    CANCEL_SELECT_ATTACKPOSITION,
    SELECT_ROTATE,
    DECIDE_SELECT_ROTATE,
    CANCEL_ROTATE,
    WAIT_COMMANDMENU_TASK,
    POST_CLOSE_COMMANDMENU,
    WAIT_BATTLEORDERMENU_TASK,
    POST_CLOSE_BATTLEORDERMENU,
    SELECT_REBORNPOSITION,
    DECIDE_SELECT_REBORNPOSITION,
    CANCEL_SELECT_REBORNPOSITION,
    SELECT_ATTACKTARGET_DIRECTION,
    DECIDE_SELECT_ATTACKTARGET_DIRECTION,
    CANCEL_SELECT_ATTACKTARGET_DIRECTION,
    SELECT_ATTACKTARGET_DIRECTION_TRAP,
    DECIDE_SELECT_ATTACKTARGET_DIRECTION_TRAP,
    CANCEL_SELECT_ATTACKTARGET_DIRECTION_TRAP,
    SELECT_ATTACKTARGET_MOVE,
    DECIDE_SELECT_ATTACKTARGET_MOVE,
    CANCEL_SELECT_ATTACKTARGET_MOVE,
    START_UNIT_ACTION,
    START_EVENT,
    BATTLE_END,
};

