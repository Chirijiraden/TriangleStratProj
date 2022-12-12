#include "NeweraSoundManager.h"

class UObject;
class UNeweraSoundManager;

void UNeweraSoundManager::StopByCategory(const ESoundCategory SoundCategory) {
}

void UNeweraSoundManager::SetMuteByCategory(const ESoundCategory SoundCategory, bool bMute) {
}

FADSoundPlaybackId UNeweraSoundManager::PlayVoiceUI(const FName& GopId, const TArray<ESoundCategory>& AdditionalSoundCategory) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundManager::PlayVoice2D(const FName& GopId, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundManager::PlayVoice(const FName& GopId, const FVector& Location, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundManager::PlaySEUI(const FName& GopId, const TArray<ESoundCategory>& AdditionalSoundCategory) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundManager::PlaySE2D(const FName& GopId, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundManager::PlaySe(const FName& GopId, const FVector& Location, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory) {
    return FADSoundPlaybackId{};
}

UNeweraSoundManager* UNeweraSoundManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void UNeweraSoundManager::FadeOutCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec, bool bAutoStop) {
}

void UNeweraSoundManager::FadeInCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec) {
}

void UNeweraSoundManager::ChangeBGM(const FName& GopId, float FadeInSec, float OldBgmFadeOutSec, float DelaySec) {
}

UNeweraSoundManager::UNeweraSoundManager() {
    this->SoundDeviceWatcher = NULL;
    this->UniqueSoundManager = NULL;
    this->TimerChangeBGM = NULL;
    this->AmbientActorManager = NULL;
}

