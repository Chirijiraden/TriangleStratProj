#include "NeweraCharacterMovementComponent.h"

UNeweraCharacterMovementComponent::UNeweraCharacterMovementComponent() {
    this->MovingRate = 1.00f;
    this->WalkingSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->DashSpeed = 0.00f;
    this->StickRateRunThreshold = 0.00f;
    this->curveSpeedRateByStick = NULL;
    this->CurveAnimRateBySpeed = NULL;
}

