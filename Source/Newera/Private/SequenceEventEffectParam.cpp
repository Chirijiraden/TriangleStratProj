#include "SequenceEventEffectParam.h"

FSequenceEventEffectParam::FSequenceEventEffectParam() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->getId = EBattleSequenceGetId::EVENT_PARAM;
    this->Scale = 0.00f;
}

