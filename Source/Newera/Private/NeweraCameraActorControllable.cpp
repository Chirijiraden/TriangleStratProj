#include "NeweraCameraActorControllable.h"

class UCurveFloat;

void ANeweraCameraActorControllable::StartChangingCameraTargetZoom(FName Identifier, float targetDistance, const UCurveFloat* distanceCurve, float Time) {
}

void ANeweraCameraActorControllable::StartChangingCameraTargetPointAndZoom(FName Identifier, const FVector& TargetPoint, const UCurveFloat* pointCurve, float targetDistance, const UCurveFloat* distanceCurve, const FRotator& targetRot, const UCurveFloat* RotationCurve, float Time) {
}

void ANeweraCameraActorControllable::StartChangingCameraTargetGridAndZoom(FName Identifier, const FIntVector& TargetGrid, const UCurveFloat* gridCurve, float targetDistance, const UCurveFloat* distanceCurve, float Time) {
}

void ANeweraCameraActorControllable::OverwriteCameraRestrictDistance(float MinDistance, float MaxDistance, float distancePerSecond) {
}

void ANeweraCameraActorControllable::EndChangingCamera(FName Identifier, float Time) {
}

void ANeweraCameraActorControllable::DisableOverwriteCameraRestrictDistance() {
}

ANeweraCameraActorControllable::ANeweraCameraActorControllable() {
    this->CameraActorViewParams.AddDefaulted(9);
    this->TransitionTime = 0.00f;
    this->gridCameraRotaionCurve = NULL;
    this->cameraZoomInOutCurve = NULL;
    this->cameraZoomInOutCurveScale = 1.00f;
    this->gridCameraRotationTime = 0.50f;
    this->InitialFocalLength = 58.00f;
    this->InitialMinFStop = 0.00f;
    this->InitialMaxFStop = 0.00f;
    this->InitialAperture = 0.12f;
    this->InitialDepthBlurAmount = 0.50f;
    this->InitialDepthBlurRadius = 4.00f;
    this->InitialDiaphragmBladeCount = 6;
    this->Switch_InitialFocalLength = 58.00f;
    this->Switch_InitialMinFStop = 0.00f;
    this->Switch_InitialMaxFStop = 0.00f;
    this->Switch_InitialAperture = 0.12f;
    this->Switch_InitialDepthBlurAmount = 0.50f;
    this->Switch_InitialDepthBlurRadius = 4.00f;
    this->Switch_InitialDiaphragmBladeCount = 6;
}

