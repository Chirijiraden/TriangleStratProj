#include "SequenceCameraActor.h"

ASequenceCameraActor::ASequenceCameraActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
    this->LookatTrackingRotateBase = ELookatTrackingRotateBase::CameraActor;
}