#include "LevelWhiteBoxCameraData.h"

FLevelWhiteBoxCameraData::FLevelWhiteBoxCameraData() {
    this->FixingCamera = false;
    this->CameraRestrictCurveX = NULL;
    this->CameraRestrictCurveY = NULL;
    this->CameraRestrictCurveZ = NULL;
    this->OverrideCameraActorViewParams = false;
}

