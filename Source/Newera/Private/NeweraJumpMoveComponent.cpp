#include "NeweraJumpMoveComponent.h"

UNeweraJumpMoveComponent::UNeweraJumpMoveComponent() {
    this->SpanForceAttachTrajectory = 0.50f;
    this->ActivationInputTimeSec = 0.30f;
    this->ActivationCancelTimeSec = 0.20f;
    this->CrouchTimeSec = 0.20f;
    this->CrouchTimeSecDown = 0.30f;
    this->ForceCrouchTimeSecDown = 0.20f;
    this->JumpMoveTimeSec = 0.30f;
    this->JumpMoveTimeSecDown = 0.30f;
    this->JumpHeightBase = 50.00f;
    this->JumpHeightDown = 50.00f;
    this->InterpT = NULL;
    this->CurrentCurveJumpTrajectory = NULL;
}

