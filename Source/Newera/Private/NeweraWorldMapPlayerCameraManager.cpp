#include "NeweraWorldMapPlayerCameraManager.h"

ANeweraWorldMapPlayerCameraManager::ANeweraWorldMapPlayerCameraManager() {
    this->CameraTarget = NULL;
    this->PostProcessMPCRadialBlur = NULL;
    this->InterpEventDecisionSequenceT = NULL;
    this->InterpEventDecisionSequenceCurveFOV = NULL;
    this->InterpCurveBlurPower = NULL;
    this->InterpCurveBlurRadius = NULL;
    this->InterpCurveBlurRadiusExponent = NULL;
}

