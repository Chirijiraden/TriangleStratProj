#include "WorldMapNarrationDummyCamera.h"

void AWorldMapNarrationDummyCamera::ReserveCameraPosition(FVector LocationOnEnd, FRotator RotationOnEnd, float FOVOnEnd) {
}

void AWorldMapNarrationDummyCamera::ReserveCameraModeCommon() {
}

void AWorldMapNarrationDummyCamera::ReserveCameraMode(ECameraMode CameraModeDefault, const FVector& LocationOnEnd, const FRotator& RotationOnEnd) {
}

AWorldMapNarrationDummyCamera::AWorldMapNarrationDummyCamera() {
    this->InterpT = NULL;
}

