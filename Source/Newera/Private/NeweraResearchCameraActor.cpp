#include "NeweraResearchCameraActor.h"

void ANeweraResearchCameraActor::SetCameraTargetLength(float CameraTargetLength) {
}

float ANeweraResearchCameraActor::GetCameraTargetLength() const {
    return 0.0f;
}

ANeweraResearchCameraActor::ANeweraResearchCameraActor() {
    this->InitialCameraAngleElevation = -30.00f;
    this->InitialCameraTargetLength = 300.00f;
    this->InitialCameraOffset = 0.00f;
}

