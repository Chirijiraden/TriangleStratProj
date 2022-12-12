#include "SequenceEventSlideAction.h"

FSequenceEventSlideAction::FSequenceEventSlideAction() {
    this->slideMoveType = ESlideMoveType::STANDARD;
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->noGravity = false;
    this->forwardScale = 0.00f;
    this->forwardTime = 0.00f;
    this->rightScale = 0.00f;
    this->rightTime = 0.00f;
    this->upScale = 0.00f;
    this->upTime = 0.00f;
    this->moveUnitType = EMoveUnitType::OFFSET;
    this->offsetX = 0;
    this->offsetY = 0;
}

