#include "SequenceEventChangeActionParam.h"

FSequenceEventChangeActionParam::FSequenceEventChangeActionParam() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->BattleSequenceAnimationPosition = EBattleSequenceAnimationPosition::INVALID;
    this->AnimationType = EAnimationType::None;
    this->flipbookAnimationOptionFlag = EFlipbookAnimationOptionFlag::NONE;
    this->delayedAnimTime = false;
    this->spriteReplace = false;
}

