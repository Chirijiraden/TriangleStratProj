#include "ChangeMaterialByCameraRotation.h"

void UChangeMaterialByCameraRotation::CreateDynamicMaterial() {
}

UChangeMaterialByCameraRotation::UChangeMaterialByCameraRotation() {
    this->CurveOffset = 0.00f;
    this->ChangeValidateCurve = NULL;
    this->CollisionThreshold = 0.25f;
    this->DisableAutoCreatingDynamicMaterial = false;
}

