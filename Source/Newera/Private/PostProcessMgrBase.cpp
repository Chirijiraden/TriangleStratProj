#include "PostProcessMgrBase.h"

FVector UPostProcessMgrBase::GetTargetLocation() const {
    return FVector{};
}

float UPostProcessMgrBase::GetTargetLength() const {
    return 0.0f;
}

float UPostProcessMgrBase::GetFocalLength() const {
    return 0.0f;
}

float UPostProcessMgrBase::GetDofDepthBlurRadius() const {
    return 0.0f;
}

float UPostProcessMgrBase::GetDofDepthBlurAmount() const {
    return 0.0f;
}

int32 UPostProcessMgrBase::GetDiaphragmBladeCount() const {
    return 0;
}

FRotator UPostProcessMgrBase::GetCameraRotation() const {
    return FRotator{};
}

FVector UPostProcessMgrBase::GetCameraLocation() const {
    return FVector{};
}

float UPostProcessMgrBase::GetAperture() const {
    return 0.0f;
}

UPostProcessMgrBase::UPostProcessMgrBase() {
    this->postProcess = NULL;
    this->FocusActor = NULL;
}

