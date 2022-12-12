#include "EventJumpLabel.h"

void AEventJumpLabel::SetJumpCondition2(EJumpLabelCondition condition) {
}

void AEventJumpLabel::SetJumpCondition(EJumpLabelCondition condition) {
}

AEventJumpLabel::AEventJumpLabel() {
    this->jumpCondition = EJumpLabelCondition::NO_CONDITION;
    this->jumpCondition2 = EJumpLabelCondition::NO_CONDITION;
}

