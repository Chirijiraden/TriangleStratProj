#include "WorldMapStaticDataAsset.h"

UWorldMapStaticDataAsset::UWorldMapStaticDataAsset() {
    this->CameraMoveSpeedOnAttached = 0.00f;
    this->DelayCameraMoveStart = 0.00f;
    this->CameraViewpointTransitionTimeRateOnModeTransition = 0.00f;
    this->CursorAccelerationAdd = 0.00f;
    this->CursorAccelerationSub = 0.00f;
    this->CursorSpeedMax = 0.00f;
    this->CursorAttractSpeedToMovableArea = 0.00f;
    this->CursorAttractSpeedRateOfSpeedMaxOnCameraMove = 0.00f;
    this->InputReservableNumDirectionKey = 0;
    this->InputDelaySecAfterDialog = 0.00f;
    this->NarrationPlayVoiceDelaySec = 0.00f;
    this->NarrationFadeOutSecOnForceTransition = 0.00f;
    this->WorldIconDataTable = NULL;
}

