#include "NeweraGridMoveComponent.h"

bool UNeweraGridMoveComponent::IsMoving() const {
    return false;
}

UNeweraGridMoveComponent::UNeweraGridMoveComponent() {
    this->InterpLocationT = NULL;
    this->InterpRotationT = NULL;
    this->InterpFlyingPreMoveT = NULL;
    this->InterpFlyingPostMoveT = NULL;
    this->InterpLadderPreMoveT = NULL;
    this->InterpLadderMoveT = NULL;
    this->TimerLadderMoveAnimation = NULL;
    this->InterpLadderPostMoveT = NULL;
    this->TrolleyActor = NULL;
}

