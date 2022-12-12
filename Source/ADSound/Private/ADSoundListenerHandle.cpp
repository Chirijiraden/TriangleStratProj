#include "ADSoundListenerHandle.h"

class AActor;

void UADSoundListenerHandle::UseCameraRotation(const bool bEnable) {
}

void UADSoundListenerHandle::SetWorldTransform(const FTransform& NewTransform) {
}

void UADSoundListenerHandle::SetWorldRotation(const FQuat& NewRotation) {
}

void UADSoundListenerHandle::SetWorldLocation(const FVector& NewLocation) {
}

void UADSoundListenerHandle::SetVelocity(const FVector& NewVelocity) {
}

void UADSoundListenerHandle::SetRelativeTransform(const FTransform& NewTransform) {
}

void UADSoundListenerHandle::SetRelativeRotation(const FQuat& NewRotation) {
}

void UADSoundListenerHandle::SetRelativeLocation(const FVector& NewLocation) {
}

void UADSoundListenerHandle::SetOwner(const AActor* NewOwner) {
}

FTransform UADSoundListenerHandle::GetWorldTransform() const {
    return FTransform{};
}

FQuat UADSoundListenerHandle::GetWorldRotation() const {
    return FQuat{};
}

FVector UADSoundListenerHandle::GetWorldLocation() const {
    return FVector{};
}

FVector UADSoundListenerHandle::GetVelocity() const {
    return FVector{};
}

FTransform UADSoundListenerHandle::GetRelativeTransform() const {
    return FTransform{};
}

FQuat UADSoundListenerHandle::GetRelativeRotation() const {
    return FQuat{};
}

FVector UADSoundListenerHandle::GetRelativeLocation() const {
    return FVector{};
}

AActor* UADSoundListenerHandle::GetOwner() const {
    return NULL;
}

void UADSoundListenerHandle::EnableAutoUpdateVelocity(const bool bEnable) {
}

void UADSoundListenerHandle::AddWorldTransform(const FTransform& AddTransform) {
}

void UADSoundListenerHandle::AddWorldRotation(const FQuat& AddRotation) {
}

void UADSoundListenerHandle::AddWorldLocation(const FVector& AddLocation) {
}

void UADSoundListenerHandle::AddRelativeTransform(const FTransform& AddTransform) {
}

void UADSoundListenerHandle::AddRelativeRotation(const FQuat& AddRotation) {
}

void UADSoundListenerHandle::AddRelativeLocation(const FVector& AddLocation) {
}

UADSoundListenerHandle::UADSoundListenerHandle() {
    this->Listener = NULL;
}

