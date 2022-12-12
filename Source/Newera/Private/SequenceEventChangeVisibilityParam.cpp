#include "SequenceEventChangeVisibilityParam.h"

FSequenceEventChangeVisibilityParam::FSequenceEventChangeVisibilityParam() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->Visibility = false;
    this->changeTime = 0.00f;
}

