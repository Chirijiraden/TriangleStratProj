#include "SequenceEventMoveUnitParam.h"

FSequenceEventMoveUnitParam::FSequenceEventMoveUnitParam() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->moveUnitType = EMoveUnitType::OFFSET;
    this->checkRoute = false;
}

