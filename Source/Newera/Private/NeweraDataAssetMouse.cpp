#include "NeweraDataAssetMouse.h"

UNeweraDataAssetMouse::UNeweraDataAssetMouse() {
    this->ZoomInOutMouseWheelCurve = NULL;
    this->MouseDragThreshold = 0.00f;
    this->mouseDragToCameraRotationRateH = 0.00f;
    this->mouseDragToCameraRotationRateV = 0.00f;
    this->MouseDragToCameraRotationClipV = 0.00f;
    this->CameraSnapDragTimeMin = 0.00f;
    this->MouseNoUseTimeThreshold = 0.00f;
    this->MouseNoUseTimeThresholdForWorldMap = 0.00f;
    this->MouseScreenDragForWorldMapCursorRateH = 0.00f;
    this->MouseScreenDragForWorldMapCursorRateV = 0.00f;
}

