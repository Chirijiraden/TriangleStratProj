#include "EventChangeVisibility.h"

void AEventChangeVisibility::SetTargetType(EBattleSequenceTargetType _targetType) {
}

AEventChangeVisibility::AEventChangeVisibility() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->Visibility = false;
    this->changeTime = 0.00f;
}

