#include "NeweraDebugSetting.h"

class UObject;
class UNeweraDebugSetting;

void UNeweraDebugSetting::SetSaveLoadErrorCode(int32 NewSaveLoadErrorCode) {
}

void UNeweraDebugSetting::SetReverseCameraV(bool Reverse) {
}

void UNeweraDebugSetting::SetReverseCameraH(bool Reverse) {
}

void UNeweraDebugSetting::SetQuickCameraRotation(bool Enable) {
}

void UNeweraDebugSetting::SetPostProcessGammaRate(float Rate) {
}

void UNeweraDebugSetting::SetPostProcessGainRate(float Rate) {
}

void UNeweraDebugSetting::SetPostProcessEdgeBurnWeight(float Weight) {
}

void UNeweraDebugSetting::SetGameTypeVersion(int32 NewGameTypeVersion) {
}

void UNeweraDebugSetting::SetGameDifficulty(int32 difficulty) {
}

void UNeweraDebugSetting::SetGameClearCount(int32 NewGameClearCount) {
}

void UNeweraDebugSetting::SetEnableStandbyCamera(bool Enable) {
}

void UNeweraDebugSetting::SetEnableSkipUnitRotate(bool Enable) {
}

void UNeweraDebugSetting::SetEnablePickUpTarget(bool Enable) {
}

void UNeweraDebugSetting::SetEnableForceFeedback(bool Enable) {
}

void UNeweraDebugSetting::SetEnableCursorBaseRotateByStickCheck(const UObject* WorldContextObject, bool bEnable) {
}

void UNeweraDebugSetting::SetElapsedTimeBattleType(int32 NewElapsedTimeBattleType) {
}

void UNeweraDebugSetting::SetElapsedTimeBattle(float NewElapsedTimeBattle) {
}

void UNeweraDebugSetting::SetDispTextRate(float Rate) {
}

void UNeweraDebugSetting::SetDebugWorldMapFlag(EDebugWorldMapFlags flag, bool Value) {
}

void UNeweraDebugSetting::SetDebugVoteResult(EDebugVoteResult Value) {
}

void UNeweraDebugSetting::SetDebugSoundFlag(EDebugSoundFlags flag, bool Value) {
}

void UNeweraDebugSetting::SetDebugMapTimeStart(float mapTime) {
}

void UNeweraDebugSetting::SetDebugMapTimeProgressSecondsPerHour(float secondsPerHour) {
}

void UNeweraDebugSetting::SetDebugLogLevelUserKobayashi(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugLogLevelSound(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugLogLevelEvent(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugLogLevelCellEvaluation(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugLogLevelBattleFlow(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugLogLevelBattleDamage(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugLogLevelAI(EDebugLogLevel InLogLevel) {
}

void UNeweraDebugSetting::SetDebugForcePersuade(EDebugForcePersuade Value) {
}

void UNeweraDebugSetting::SetDebugEtcFlag(EDebugEtcFlags flag, bool Value) {
}

void UNeweraDebugSetting::SetDebugDrawFlag2(EDebugDrawFlags2 flag, bool Value) {
}

void UNeweraDebugSetting::SetDebugDrawFlag(EDebugDrawFlags flag, bool Value) {
}

void UNeweraDebugSetting::SetDebugActionFlag2(EDebugActionFlags2 flag, bool Value) {
}

void UNeweraDebugSetting::SetDebugActionFlag(EDebugActionFlags flag, bool Value) {
}

void UNeweraDebugSetting::SetCursorBaseRotateByStickAxisSizeMin(const UObject* WorldContextObject, float Val) {
}

void UNeweraDebugSetting::SetCursorBaseRotateByStickAxisDotMin(const UObject* WorldContextObject, float Val) {
}

void UNeweraDebugSetting::SetCameraSpeedRateV(float Rate) {
}

void UNeweraDebugSetting::SetCameraSpeedRateH(float Rate) {
}

void UNeweraDebugSetting::SetBattleUnitMoveSpeedRate(float Speed) {
}

void UNeweraDebugSetting::SetBattleSequencerPlaySpeed(float Speed) {
}

void UNeweraDebugSetting::SetBattleDropItemRarity(int32 rarity) {
}

void UNeweraDebugSetting::SetBattleCursorPadDirMode(EBattleCursorPadDirMode Mode) {
}

void UNeweraDebugSetting::SetBattleAutoSave(bool Enable) {
}

void UNeweraDebugSetting::SetBattleAttackDamageZeroType(int32 Type) {
}

void UNeweraDebugSetting::SetBattleAttackAlwaysDeadType(int32 Type) {
}

void UNeweraDebugSetting::SetBattleAlwaysFastForward(bool Enable) {
}

UNeweraDebugSetting* UNeweraDebugSetting::Reset() {
    return NULL;
}

bool UNeweraDebugSetting::IsDebugWorldMapFlagOn(EDebugWorldMapFlags flag) {
    return false;
}

bool UNeweraDebugSetting::IsDebugSoundFlagOn(EDebugSoundFlags flag) {
    return false;
}

bool UNeweraDebugSetting::IsDebugEtcFlagOn(EDebugEtcFlags flag) {
    return false;
}

bool UNeweraDebugSetting::IsDebugDrawFlagOn(EDebugDrawFlags flag) {
    return false;
}

bool UNeweraDebugSetting::IsDebugDrawFlag2On(EDebugDrawFlags2 flag) {
    return false;
}

bool UNeweraDebugSetting::IsDebugActionFlagOn(EDebugActionFlags flag) {
    return false;
}

bool UNeweraDebugSetting::IsDebugActionFlag2On(EDebugActionFlags2 flag) {
    return false;
}

int32 UNeweraDebugSetting::GetSaveLoadErrorCode() {
    return 0;
}

bool UNeweraDebugSetting::GetReverseCameraV() {
    return false;
}

bool UNeweraDebugSetting::GetReverseCameraH() {
    return false;
}

bool UNeweraDebugSetting::GetQuickCameraRotation() {
    return false;
}

float UNeweraDebugSetting::GetPostProcessGammaRate() {
    return 0.0f;
}

float UNeweraDebugSetting::GetPostProcessGainRate() {
    return 0.0f;
}

float UNeweraDebugSetting::GetPostProcessEdgeBurnWeight() {
    return 0.0f;
}

int32 UNeweraDebugSetting::GetGameTypeVersion() {
    return 0;
}

int32 UNeweraDebugSetting::GetGameDifficultyBP() {
    return 0;
}

int32 UNeweraDebugSetting::GetGameClearCount() {
    return 0;
}

bool UNeweraDebugSetting::GetEnableStandbyCamera() {
    return false;
}

bool UNeweraDebugSetting::GetEnableSkipUnitRotate() {
    return false;
}

bool UNeweraDebugSetting::GetEnablePickUpTarget() {
    return false;
}

bool UNeweraDebugSetting::GetEnableForceFeedback() {
    return false;
}

bool UNeweraDebugSetting::GetEnableCursorBaseRotateByStickCheck() {
    return false;
}

int32 UNeweraDebugSetting::GetElapsedTimeBattleType() {
    return 0;
}

float UNeweraDebugSetting::GetElapsedTimeBattle() {
    return 0.0f;
}

float UNeweraDebugSetting::GetDispTextRate() {
    return 0.0f;
}

EDebugVoteResult UNeweraDebugSetting::GetDebugVoteResult() {
    return EDebugVoteResult::NONE;
}

float UNeweraDebugSetting::GetDebugMapTimeStart() {
    return 0.0f;
}

float UNeweraDebugSetting::GetDebugMapTimeProgressSecondsPerHour() {
    return 0.0f;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelUserKobayashi() {
    return EDebugLogLevel::NONE;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelSound() {
    return EDebugLogLevel::NONE;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelEvent() {
    return EDebugLogLevel::NONE;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelCellEvaluation() {
    return EDebugLogLevel::NONE;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelBattleFlow() {
    return EDebugLogLevel::NONE;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelBattleDamage() {
    return EDebugLogLevel::NONE;
}

EDebugLogLevel UNeweraDebugSetting::GetDebugLogLevelAI() {
    return EDebugLogLevel::NONE;
}

EDebugForcePersuade UNeweraDebugSetting::GetDebugForcePersuade() {
    return EDebugForcePersuade::NONE;
}

float UNeweraDebugSetting::GetCursorBaseRotateByStickAxisSizeMin() {
    return 0.0f;
}

float UNeweraDebugSetting::GetCursorBaseRotateByStickAxisDotMin() {
    return 0.0f;
}

float UNeweraDebugSetting::GetCameraSpeedRateV() {
    return 0.0f;
}

float UNeweraDebugSetting::GetCameraSpeedRateH() {
    return 0.0f;
}

float UNeweraDebugSetting::GetBattleUnitMoveSpeedRate() {
    return 0.0f;
}

float UNeweraDebugSetting::GetBattleSequencerPlaySpeed() {
    return 0.0f;
}

int32 UNeweraDebugSetting::GetBattleDropItemRarity() {
    return 0;
}

EBattleCursorPadDirMode UNeweraDebugSetting::GetBattleCursorPadDirMode() {
    return EBattleCursorPadDirMode::NONE;
}

bool UNeweraDebugSetting::GetBattleAutoSave() {
    return false;
}

int32 UNeweraDebugSetting::GetBattleAttackDamageZeroType() {
    return 0;
}

int32 UNeweraDebugSetting::GetBattleAttackAlwaysDeadType() {
    return 0;
}

bool UNeweraDebugSetting::GetBattleAlwaysFastForward() {
    return false;
}

void UNeweraDebugSetting::ClearSaveLoadErrorCode() {
}

void UNeweraDebugSetting::ClearGameTypeVersion() {
}

void UNeweraDebugSetting::ClearGameClearCount() {
}

void UNeweraDebugSetting::ClearEtcData() {
}

void UNeweraDebugSetting::ClearElapsedTimeBattleType() {
}

void UNeweraDebugSetting::ClearElapsedTimeBattle() {
}

void UNeweraDebugSetting::ClearDebugWorldMapFlags() {
}

void UNeweraDebugSetting::ClearDebugVoteResult() {
}

void UNeweraDebugSetting::ClearDebugSoundFlags() {
}

void UNeweraDebugSetting::ClearDebugMapTimeStart() {
}

void UNeweraDebugSetting::ClearDebugMapTimeProgressSecondsPerHour() {
}

void UNeweraDebugSetting::ClearDebugForcePersuade() {
}

void UNeweraDebugSetting::ClearDebugEtcFlags() {
}

void UNeweraDebugSetting::ClearDebugDrawFlags2() {
}

void UNeweraDebugSetting::ClearDebugDrawFlags() {
}

void UNeweraDebugSetting::ClearDebugActionFlags2() {
}

void UNeweraDebugSetting::ClearDebugActionFlags() {
}

UNeweraDebugSetting::UNeweraDebugSetting() {
    this->debugActionFlags = 0;
    this->debugDrawFlags = 0;
    this->debugSoundFlags = 0;
    this->debugWorldMapFlags = 0;
    this->mapTimeProgressSecondsPerHour = 0.00f;
    this->mapTimeStart = 0.00f;
    this->elapsedTimeBattleType = 0;
    this->GameTypeVersion = 0;
    this->gameClearCount = 0;
    this->elapsedTimeBattle = 0.00f;
    this->saveLoadErrorCode = 0;
    this->LogLevelCellEvaluation = EDebugLogLevel::NONE;
    this->LogLevelBattleDamage = EDebugLogLevel::NONE;
    this->LogLevelBattleFlow = EDebugLogLevel::WARNING;
    this->LogLevelSound = EDebugLogLevel::WARNING;
    this->LogLevelAI = EDebugLogLevel::NONE;
    this->LogLevelUserKobayashi = EDebugLogLevel::NONE;
    this->LogLevelEvent = EDebugLogLevel::NONE;
    this->debugEtcFlags = 0;
    this->debugActionFlags2 = 0;
    this->debugDrawFlags2 = 0;
    this->forcePersuade = EDebugForcePersuade::NONE;
    this->voteResult = EDebugVoteResult::NONE;
    this->battleAttackAlwaysDeadType = 0;
    this->battleAttackDamageZeroType = 0;
    this->battleDorpItemRarity = 0;
}

