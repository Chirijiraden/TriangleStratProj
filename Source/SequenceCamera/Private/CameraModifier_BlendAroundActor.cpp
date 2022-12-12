#include "CameraModifier_BlendAroundActor.h"

class AActor;

void UCameraModifier_BlendAroundActor::BlendOut(AActor* InBaseActor, AActor* InOtherCameraActor, const FViewTargetTransitionParams& TransitionParams, EBlendCoordinate EBlendCoordinate) {
}

void UCameraModifier_BlendAroundActor::BlendIn(AActor* InBaseActor, const FViewTargetTransitionParams& TransitionParams, EBlendCoordinate EBlendCoordinate) {
}

UCameraModifier_BlendAroundActor::UCameraModifier_BlendAroundActor() {
    this->baseActor = NULL;
    this->otherCameraActor = NULL;
}

