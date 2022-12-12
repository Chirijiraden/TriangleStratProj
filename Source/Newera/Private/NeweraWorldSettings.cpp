#include "NeweraWorldSettings.h"

ANeweraWorldSettings::ANeweraWorldSettings() {
    this->MapChipSize = 96.00f;
    this->MapChipHeight = 36.00f;
    this->CannotDownHeightLevel = 1;
    this->CannotUpHeightLevel = 1;
    this->MoveBlokingGapRateX = 0.90f;
    this->MoveBlokingGapRateY = 0.90f;
    this->FixingCamera = false;
    this->CameraRestrictCurveX = NULL;
    this->CameraRestrictCurveY = NULL;
    this->CameraRestrictCurveZ = NULL;
    this->InitialBattleCameraYaw = -1.00f;
}

