#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EAfterFadeOut.h"
#include "EFadingPriority.h"
#include "UObject/NoExportTypes.h"
#include "NeweraGameInstance.generated.h"

class UActorListMan;
class UAchievementManager;
class UCommon_AutoSave;
class UDebugInstanceManager;
class UEffectAssetMan;
class UDynamicFlipbookFactory;
class UFadingWidget;
class ULuaScriptMgr;
class UMapGridObjectManager;
class UMapCellInfoManager;
class UNeweraAutoModeManager;
class UNeweraDataAssetMouse;
class UNeweraDataAssetHUD;
class UNeweraDataAssetFlipbook;
class UNeweraDataAssetCommon;
class UNeweraCalculator;
class UNeweraDebugSetting;
class UNeweraDataAssetSound;
class UNeweraDataAssetOptionSetting;
class UNeweraDataAssetNewGame;
class UNeweraPaper2DAnimationDataCache;
class UNeweraSaveGameManager;
class UNeweraRouteSearchManager;
class UNeweraSoundManager;
class UNeweraUIWidgetManager;
class USoundSeq;
class UUnitActorDataAsset;
class UUITextureManager;
class UWorldMapManager;
class UWorldMapStaticDataAsset;
class UMaterialParameterCollection;

UCLASS(Blueprintable, NonTransient)
class NEWERA_API UNeweraGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuaScriptMgr* LuaScriptMgr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUITextureManager* TextureManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraUIWidgetManager* NeweraUIWidgetManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UUnitActorDataAsset> StaticDataUnitActorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraDataAssetCommon> StaticDataCommonAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraDataAssetSound> StaticDataSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraDataAssetOptionSetting> StaticDataOptionSettingAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraDataAssetFlipbook> StaticDataFlipbookAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorldMapStaticDataAsset> StaticDataWorldMapAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNeweraCalculator> NeweraCalculatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetNewGame* DataAssetNewGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetHUD* NeweraDataAssetHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetMouse* NeweraDataAssetMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_AutoSave> WidgetClassCommonAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollectionUIPause;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraSoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraSaveGameManager* saveGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDebugSetting* debugSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorListMan* ActorListMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEffectAssetMan* EffectAssetMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraRouteSearchManager* RouteSearchManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDynamicFlipbookFactory* DynamicFlipbookFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraPaper2DAnimationDataCache* NeweraPaper2DAnimationDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraAutoModeManager* NeweraAutoModeManager;
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UFadingWidget* FadingWidget[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_AutoSave* widgetCommonAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUnitActorDataAsset* StaticDataUnitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetCommon* StaticDataCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetSound* StaticDataSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetFlipbook* StaticDataFlipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapStaticDataAsset* StaticDataWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetOptionSetting* StaticDataOptionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapManager* WorldMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraCalculator* Calculator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapCellInfoManager* CellInfoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapGridObjectManager* MapGridObjectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugInstanceManager* DebugInstanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSeq* Instance_SoundSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAchievementManager* AchievementMan;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTitleLogoDisped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSystemDataDialogDisped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadDemoDataDialogDisped;
    
    UNeweraGameInstance();
    UFUNCTION(BlueprintCallable)
    FName StartFromDevelopmentLauncher();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor SetFadeColor(EFadingPriority EFadingPriority, FLinearColor FadeColor);
    
    UFUNCTION(BlueprintCallable)
    void SendRequestReturnTitle();
    
    UFUNCTION(BlueprintCallable)
    FName ReturnTitle();
    
    UFUNCTION(BlueprintCallable)
    void ResetDebugSettings();
    
    UFUNCTION(BlueprintCallable)
    void ProcessRequestReturnTitle();
    
    UFUNCTION(BlueprintCallable)
    void NowloadStart(float Timer, bool tips);
    
    UFUNCTION(BlueprintCallable)
    void NowloadEnd(float Timer);
    
    UFUNCTION(BlueprintCallable)
    FName NewGame(bool titleSelectNewGame);
    
    UFUNCTION(BlueprintCallable)
    bool IsInFading(EFadingPriority EFadingPriority);
    
    UFUNCTION(BlueprintCallable)
    bool IsFadeOutEnd(EFadingPriority EFadingPriority);
    
    UFUNCTION(BlueprintCallable)
    bool IsFadeInEnd(EFadingPriority EFadingPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUITextureManager* GetTextureManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundSeq* GetSoundSeq() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraSoundManager* GetSoundManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraSaveGameManager* GetSaveGameManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraRouteSearchManager* GetRouteSearchManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraPaper2DAnimationDataCache* GetNeweraPaper2DAnimationDataCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraAutoModeManager* GetNeweraAutoModeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuaScriptMgr* GetLuaScriptManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetFadeColor(EFadingPriority EFadingPriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamicFlipbookFactory* GetDynamicFlipbookFactory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCompileVersion() const;
    
    UFUNCTION(BlueprintCallable)
    void Fading(bool bFadeIn, float Timer, EAfterFadeOut InAfterFadeOut, FLinearColor FadeColor);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(EFadingPriority EFadingPriority, float Timer);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(EFadingPriority EFadingPriority, float Timer);
    
    UFUNCTION(BlueprintCallable)
    FName Ending();
    
    UFUNCTION(BlueprintCallable)
    void EndAutoSaveAnimation();
    
    UFUNCTION(BlueprintCallable)
    FName DemoEnding();
    
    UFUNCTION(BlueprintCallable)
    void BeginAutoSaveAnimation();
    
};

