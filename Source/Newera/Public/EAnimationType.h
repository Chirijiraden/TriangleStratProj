#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.generated.h"

UENUM(BlueprintType)
enum class EAnimationType : uint8 {
    None,
    Idle,
    BattleIdle,
    Talk,
    Walk,
    Run,
    Jump,
    Idle_Lamp,
    Walk_Lamp,
    Run_Lamp,
    Attack,
    Damage,
    Death,
    Nod,
    Facedown,
    Close_eye,
    Hold_on,
    RefuseA,
    Squat_Nod,
    Squat_Up,
    Squat_End,
    OnehandA,
    OnehandA1,
    OnehandB,
    BothhandsA,
    BothhandsA1,
    Arms,
    Thinker,
    Zipline,
    Ladder,
    EventA,
    EventB,
    EventC,
    EventD,
    EventE,
    EventF,
    EventG,
    EventH,
    EventI,
    EventJ,
    EventK,
    EventL,
    EventM,
    EventN,
    EventO,
    EventP,
    EventQ,
    EventR,
    EventS,
    EventT,
    EventU,
    EventV,
    EventW,
    EventX,
    EventY,
    EventZ,
    AbilityA,
    AbilityB,
    AbilityC,
    AbilityD,
    AbilityE,
    AbilityF,
    AbilityG,
    AbilityH,
    AbilityI,
    AbilityJ,
    AbilityK,
    Bow,
    Faceright,
    Faceleft,
    VoteUp,
    Laugh,
    Worship,
    Salute,
    Detective,
    Drink,
    Drink_RefuseA,
    Drink_Nod,
    Drink_toast,
    UIC_BattleIdle,
    JUDGEMENTRAY_GHOST,
    EventAA,
    EventAB,
    EventAC,
    Max,
};

