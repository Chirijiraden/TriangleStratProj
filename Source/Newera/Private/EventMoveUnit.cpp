#include "EventMoveUnit.h"

void AEventMoveUnit::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AEventMoveUnit::SetMoveUnitType(EMoveUnitType _moveUnitType) {
}

AEventMoveUnit::AEventMoveUnit() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->moveUnitType = EMoveUnitType::ATTACK_TARGET;
    this->checkRoute = false;
    this->offsetX = 0;
    this->offsetY = 0;
}

