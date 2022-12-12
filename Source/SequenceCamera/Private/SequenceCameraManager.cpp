#include "SequenceCameraManager.h"

class AActor;
class UCameraComponent;

void ASequenceCameraManager::StopSequence(float OutBlendTime) {
}

void ASequenceCameraManager::StartSequence(const FSequenceCameraInfo& info_) {
}

void ASequenceCameraManager::ResumeSequence() {
}

void ASequenceCameraManager::PauseSequence() {
}

void ASequenceCameraManager::Pause() {
}

void ASequenceCameraManager::OnCameraCut(UCameraComponent* CameraComponent) {
}

FSequenceCameraTargetInfo ASequenceCameraManager::MakeSequenceCameraTargetInfoByTransform(const FVector& targetLocation_, const FVector& targetForward_, float targetRadius_) {
    return FSequenceCameraTargetInfo{};
}

FSequenceCameraTargetInfo ASequenceCameraManager::MakeSequenceCameraTargetInfoByActor(AActor* targetActor_) {
    return FSequenceCameraTargetInfo{};
}

bool ASequenceCameraManager::IsPlaying() const {
    return false;
}

TArray<AActor*> ASequenceCameraManager::GetEventReceivers() {
    return TArray<AActor*>();
}

void ASequenceCameraManager::EndSequence() {
}

bool ASequenceCameraManager::CheckInfo(const FSequenceCameraInfo& info_) const {
    return false;
}

void ASequenceCameraManager::BlendWithParam(const FViewTargetTransitionParams& InBlendParam_, const FViewTargetTransitionParams& OutBlendParam_) {
}

void ASequenceCameraManager::BlendOutWithParam(const FViewTargetTransitionParams& OutBlendParam_) {
}

void ASequenceCameraManager::BlendOut() {
}

void ASequenceCameraManager::BlendInWithParam(const FViewTargetTransitionParams& InBlendParam_) {
}

void ASequenceCameraManager::BlendIn() {
}

void ASequenceCameraManager::Blend() {
}

ASequenceCameraManager::ASequenceCameraManager() {
    this->curSequenceActor = NULL;
    this->curSequencePlayer = NULL;
    this->curCameraComponent = NULL;
    this->scaleBaseRadius = 200.00f;
    this->CameraModifier = NULL;
    this->lastCameraActor = NULL;
}

