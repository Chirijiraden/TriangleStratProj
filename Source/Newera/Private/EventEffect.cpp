#include "EventEffect.h"

void AEventEffect::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AEventEffect::SetGetId(EBattleSequenceGetId _getId) {
}

AEventEffect::AEventEffect() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->getId = EBattleSequenceGetId::EVENT_PARAM;
    this->Scale = 0.00f;
}

