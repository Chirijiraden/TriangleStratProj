#include "ADSoundManagerBase.h"

class UADSoundListenerHandle;

void UADSoundManagerBase::TransitionVolumeRateById(const FADSoundPlaybackId& ID, float TargetRate, float DurationSec) {
}

bool UADSoundManagerBase::StopById(const FADSoundPlaybackId& ID) {
    return false;
}

void UADSoundManagerBase::SetVolumeRateById(const FADSoundPlaybackId& ID, float Rate) {
}

void UADSoundManagerBase::SetVolumeFadeOutById(const FADSoundPlaybackId& ID, float DurationSec, bool bAutoStop) {
}

void UADSoundManagerBase::SetVolumeFadeInById(const FADSoundPlaybackId& ID, float DurationSec) {
}

void UADSoundManagerBase::SetPitchRateMaxById(const FADSoundPlaybackId& ID, float Rate) {
}

void UADSoundManagerBase::SetPitchRateById(const FADSoundPlaybackId& ID, float Rate) {
}

void UADSoundManagerBase::SetMuteById(const FADSoundPlaybackId& ID, bool bMute) {
}

void UADSoundManagerBase::SetLocationById(const FADSoundPlaybackId& ID, const FVector& Location) {
}

void UADSoundManagerBase::SetBusSendLevelById(const FADSoundPlaybackId& ID, const FString& BusName, float Level) {
}

void UADSoundManagerBase::SetBooleanParamById(const FADSoundPlaybackId& ID, const FName& ParamName, const bool Value) {
}

void UADSoundManagerBase::PauseById(const FADSoundPlaybackId& ID, bool bPause) {
}

void UADSoundManagerBase::NotifyAll_Stop() {
}

void UADSoundManagerBase::NotifyAll_ChangePlayable(bool bEnable) {
}

bool UADSoundManagerBase::IsPlayingById(const FADSoundPlaybackId& ID) const {
    return false;
}

bool UADSoundManagerBase::IsPausedById(const FADSoundPlaybackId& ID) const {
    return false;
}

bool UADSoundManagerBase::IsLoopById(const FADSoundPlaybackId& ID) const {
    return false;
}

int32 UADSoundManagerBase::GetRemainingMilliSecById(const FADSoundPlaybackId& ID) const {
    return 0;
}

UADSoundListenerHandle* UADSoundManagerBase::GetListenerHandle() const {
    return NULL;
}

UADSoundManagerBase::UADSoundManagerBase() {
    this->ListenerHandle = NULL;
    this->PlayerController = NULL;
    this->DefaultListener = NULL;
    this->CategoryController = NULL;
    this->OwnedController = NULL;
}

