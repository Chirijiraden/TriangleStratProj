#include "EventPlaySE2.h"

void AEventPlaySE2::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AEventPlaySE2::SetGetGopId(EBattleSequenceGetGopId _getGopId) {
}

AEventPlaySE2::AEventPlaySE2() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->getGopId = EBattleSequenceGetGopId::EVENT_PARAM;
}

