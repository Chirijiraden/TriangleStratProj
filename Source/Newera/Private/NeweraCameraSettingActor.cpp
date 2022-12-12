#include "NeweraCameraSettingActor.h"

ANeweraCameraSettingActor::ANeweraCameraSettingActor() {
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 0.00f;
    this->distancePerSecond = 0.00f;
    this->overwriteIfHitLineTrace = false;
}

