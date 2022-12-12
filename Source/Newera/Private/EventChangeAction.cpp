#include "EventChangeAction.h"

void AEventChangeAction::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AEventChangeAction::SetAnimationType(EAnimationType _animationType) {
}

void AEventChangeAction::SetAnimationPosition(EBattleSequenceAnimationPosition _BattleSequenceAnimationPosition) {
}

AEventChangeAction::AEventChangeAction() {
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->BattleSequenceAnimationPosition = EBattleSequenceAnimationPosition::INVALID;
    this->AnimationType = EAnimationType::None;
    this->flipbookAnimationOptionFlag = EFlipbookAnimationOptionFlag::NONE;
    this->delayedAnimTime = false;
    this->spriteReplace = false;
}

