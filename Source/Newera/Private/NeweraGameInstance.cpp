#include "NeweraGameInstance.h"

class UDynamicFlipbookFactory;
class ULuaScriptMgr;
class UNeweraAutoModeManager;
class UNeweraPaper2DAnimationDataCache;
class UNeweraSaveGameManager;
class UNeweraRouteSearchManager;
class UNeweraSoundManager;
class USoundSeq;
class UUITextureManager;

FName UNeweraGameInstance::StartFromDevelopmentLauncher() {
    return NAME_None;
}

FLinearColor UNeweraGameInstance::SetFadeColor(EFadingPriority EFadingPriority, FLinearColor FadeColor) {
    return FLinearColor{};
}

void UNeweraGameInstance::SendRequestReturnTitle() {
}

FName UNeweraGameInstance::ReturnTitle() {
    return NAME_None;
}

void UNeweraGameInstance::ResetDebugSettings() {
}

void UNeweraGameInstance::ProcessRequestReturnTitle() {
}

void UNeweraGameInstance::NowloadStart(float Timer, bool tips) {
}

void UNeweraGameInstance::NowloadEnd(float Timer) {
}

FName UNeweraGameInstance::NewGame(bool titleSelectNewGame) {
    return NAME_None;
}

bool UNeweraGameInstance::IsInFading(EFadingPriority EFadingPriority) {
    return false;
}

bool UNeweraGameInstance::IsFadeOutEnd(EFadingPriority EFadingPriority) {
    return false;
}

bool UNeweraGameInstance::IsFadeInEnd(EFadingPriority EFadingPriority) {
    return false;
}

UUITextureManager* UNeweraGameInstance::GetTextureManager() const {
    return NULL;
}

USoundSeq* UNeweraGameInstance::GetSoundSeq() const {
    return NULL;
}

UNeweraSoundManager* UNeweraGameInstance::GetSoundManager() const {
    return NULL;
}

UNeweraSaveGameManager* UNeweraGameInstance::GetSaveGameManager() const {
    return NULL;
}

UNeweraRouteSearchManager* UNeweraGameInstance::GetRouteSearchManager() const {
    return NULL;
}

UNeweraPaper2DAnimationDataCache* UNeweraGameInstance::GetNeweraPaper2DAnimationDataCache() const {
    return NULL;
}

UNeweraAutoModeManager* UNeweraGameInstance::GetNeweraAutoModeManager() const {
    return NULL;
}

ULuaScriptMgr* UNeweraGameInstance::GetLuaScriptManager() const {
    return NULL;
}

FLinearColor UNeweraGameInstance::GetFadeColor(EFadingPriority EFadingPriority) const {
    return FLinearColor{};
}

UDynamicFlipbookFactory* UNeweraGameInstance::GetDynamicFlipbookFactory() const {
    return NULL;
}

FText UNeweraGameInstance::GetCompileVersion() const {
    return FText::GetEmpty();
}

void UNeweraGameInstance::Fading(bool bFadeIn, float Timer, EAfterFadeOut InAfterFadeOut, FLinearColor FadeColor) {
}

void UNeweraGameInstance::FadeOut(EFadingPriority EFadingPriority, float Timer) {
}

void UNeweraGameInstance::FadeIn(EFadingPriority EFadingPriority, float Timer) {
}

FName UNeweraGameInstance::Ending() {
    return NAME_None;
}

void UNeweraGameInstance::EndAutoSaveAnimation() {
}

FName UNeweraGameInstance::DemoEnding() {
    return NAME_None;
}

void UNeweraGameInstance::BeginAutoSaveAnimation() {
}

UNeweraGameInstance::UNeweraGameInstance() {
    this->LuaScriptMgr = NULL;
    this->TextureManager = NULL;
    this->NeweraUIWidgetManager = NULL;
    this->DataAssetNewGame = NULL;
    this->NeweraDataAssetHUD = NULL;
    this->NeweraDataAssetMouse = NULL;
    this->MaterialCollectionUIPause = NULL;
    this->SoundManager = NULL;
    this->saveGameManager = NULL;
    this->debugSetting = NULL;
    this->ActorListMan = NULL;
    this->EffectAssetMan = NULL;
    this->RouteSearchManager = NULL;
    this->DynamicFlipbookFactory = NULL;
    this->NeweraPaper2DAnimationDataCache = NULL;
    this->NeweraAutoModeManager = NULL;
    this->FadingWidget[0] = NULL;
    this->FadingWidget[1] = NULL;
    this->FadingWidget[2] = NULL;
    this->widgetCommonAutoSave = NULL;
    this->StaticDataUnitActor = NULL;
    this->StaticDataCommon = NULL;
    this->StaticDataSound = NULL;
    this->StaticDataFlipbook = NULL;
    this->StaticDataWorldMap = NULL;
    this->StaticDataOptionSetting = NULL;
    this->WorldMapManager = NULL;
    this->Calculator = NULL;
    this->CellInfoManager = NULL;
    this->MapGridObjectManager = NULL;
    this->DebugInstanceManager = NULL;
    this->Instance_SoundSeq = NULL;
    this->AchievementMan = NULL;
    this->bTitleLogoDisped = false;
    this->bSystemDataDialogDisped = false;
    this->bLoadDemoDataDialogDisped = false;
}

