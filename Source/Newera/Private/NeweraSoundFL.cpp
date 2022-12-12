#include "NeweraSoundFL.h"

class UObject;
class UDebugMenuBGM;

void UNeweraSoundFL::TransitionVolumeRateBGM(float TargetRate, float DurationSec) {
}

void UNeweraSoundFL::TransitionVolumeRate(FADSoundPlaybackId PlaybackId, float TargetRate, float DurationSec) {
}

void UNeweraSoundFL::TransitionCategoryVolumeRate(const ESoundCategory SoundCategory, float TargetRate, float DurationSec) {
}

void UNeweraSoundFL::StopByCategory(const ESoundCategory SoundCategory) {
}

void UNeweraSoundFL::StopAll() {
}

void UNeweraSoundFL::STOP(FADSoundPlaybackId PlaybackId) {
}

void UNeweraSoundFL::SetVolumeRate(FADSoundPlaybackId PlaybackId, float TargetRate) {
}

void UNeweraSoundFL::SetDebugDrawFlag_AttenuationShapeAll(bool bEnable) {
}

void UNeweraSoundFL::SetCategoryVolumeRate(const ESoundCategory SoundCategory, float TargetRate) {
}

void UNeweraSoundFL::SetBGMCursorID(int32 Index) {
}

void UNeweraSoundFL::SetAisacParamById(const FADSoundPlaybackId& PlaybackId, int32 AisacId, float AisacValue) {
}

FADSoundPlaybackId UNeweraSoundFL::PlayVoiceUI(const FName& GopId) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundFL::PlayVoice2D(const FName& GopId, const UObject* Owner) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundFL::PlayVoice(const FName& GopId, const FVector& Location, const UObject* Owner) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundFL::PlaySEUI(const FName& GopId) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundFL::PlaySE2D(const FName& GopId, const UObject* Owner) {
    return FADSoundPlaybackId{};
}

FADSoundPlaybackId UNeweraSoundFL::PlaySe(const FName& GopId, const FVector& Location, const UObject* Owner) {
    return FADSoundPlaybackId{};
}

void UNeweraSoundFL::PlayDebugBGM(int32 Index) {
}

void UNeweraSoundFL::PauseBGM(bool bInPause) {
}

void UNeweraSoundFL::Pause(FADSoundPlaybackId PlaybackId, bool bPause) {
}

bool UNeweraSoundFL::IsPlayingBGM() {
    return false;
}

bool UNeweraSoundFL::IsPlaying(FADSoundPlaybackId PlaybackId) {
    return false;
}

bool UNeweraSoundFL::IsPaused(FADSoundPlaybackId PlaybackId) {
    return false;
}

bool UNeweraSoundFL::IsLoopBGM() {
    return false;
}

bool UNeweraSoundFL::IsLoop(FADSoundPlaybackId PlaybackId) {
    return false;
}

float UNeweraSoundFL::GetRemainingSec() {
    return 0.0f;
}

TArray<UDebugMenuBGM*> UNeweraSoundFL::GetDebugBGMList() {
    return TArray<UDebugMenuBGM*>();
}

int32 UNeweraSoundFL::GetBGMCursorID() {
    return 0;
}

void UNeweraSoundFL::FadeOutCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec, bool bAutoStop) {
}

void UNeweraSoundFL::FadeOutBGM(float DurationSec) {
}

void UNeweraSoundFL::FadeOut(FADSoundPlaybackId PlaybackId, float DurationSec, bool bAutoStop) {
}

void UNeweraSoundFL::FadeInCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec) {
}

void UNeweraSoundFL::FadeInBGM(float DurationSec) {
}

void UNeweraSoundFL::FadeIn(FADSoundPlaybackId PlaybackId, float DurationSec) {
}

void UNeweraSoundFL::ChangeBGM(const FName& GopId, float FadeInSec, float OldBgmFadeOutSec, float DelaySec) {
}

UNeweraSoundFL::UNeweraSoundFL() {
}

