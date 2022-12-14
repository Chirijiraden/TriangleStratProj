#include "NeweraBattleCameraActor.h"

ANeweraBattleCameraActor::ANeweraBattleCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraLagSpeedForBattle = 0.00f;
    this->CameraRotationLagSpeedForBattle = 0.00f;
    this->CameraLagMaxDistanceForBattle = 0.00f;
    this->CameraLagSpeedForStandby = 0.00f;
    this->CameraRotationLagSpeedForStandby = 0.00f;
    this->CameraLagMaxDistanceForStandby = 0.00f;
}

