#include "SequenceCameraBaseActor.h"

class AActor;
class ASequenceCameraManager;

void ASequenceCameraBaseActor::SetTargetActorInEditor(AActor* Actor) {
}

void ASequenceCameraBaseActor::EndTransform() {
}

void ASequenceCameraBaseActor::BeginTransform(ASequenceCameraManager* man) {
}

ASequenceCameraBaseActor::ASequenceCameraBaseActor() {
    this->CameraLocation = ESequenceCameraLocation::Attacker;
    this->CameraForward = ESequenceCameraForward::Attacker;
    this->ScaleMin = 0.00f;
    this->ScaleMax = 0.00f;
    this->bTrackLocation = false;
    this->bTrackForward = false;
    this->TrackingInterpSpeed = 0.00f;
    this->TargetActorInEditor = NULL;
    this->bIgnoreFlip = false;
    this->bCameraDistance = false;
    this->manager = NULL;
}

