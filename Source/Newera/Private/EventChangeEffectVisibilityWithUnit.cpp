#include "EventChangeEffectVisibilityWithUnit.h"

void AEventChangeEffectVisibilityWithUnit::SetTargetType(EBattleSequenceTargetType _targetType) {
}

AEventChangeEffectVisibilityWithUnit::AEventChangeEffectVisibilityWithUnit() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->effectVisibility = false;
}

