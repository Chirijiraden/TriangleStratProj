#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EBattleCursorPadDirMode.h"
#include "EDebugActionFlags.h"
#include "EDebugActionFlags2.h"
#include "EDebugDrawFlags.h"
#include "EDebugSoundFlags.h"
#include "EDebugEtcFlags.h"
#include "EDebugDrawFlags2.h"
#include "EDebugWorldMapFlags.h"
#include "EDebugForcePersuade.h"
#include "EDebugVoteResult.h"
#include "EDebugLogLevel.h"
#include "OptionSaveData.h"
#include "NeweraDebugSetting.generated.h"

class UObject;
class UNeweraDebugSetting;

UCLASS(Blueprintable)
class NEWERA_API UNeweraDebugSetting : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 debugActionFlags;
    
    UPROPERTY(EditAnywhere)
    uint32 debugDrawFlags;
    
    UPROPERTY(EditAnywhere)
    uint32 debugSoundFlags;
    
    UPROPERTY(EditAnywhere)
    uint32 debugWorldMapFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mapTimeProgressSecondsPerHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mapTimeStart;
    
    UPROPERTY(EditAnywhere)
    uint32 elapsedTimeBattleType;
    
    UPROPERTY(EditAnywhere)
    uint32 GameTypeVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gameClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float elapsedTimeBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 saveLoadErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionSaveData optionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelCellEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelBattleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelBattleFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelUserKobayashi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugLogLevel LogLevelEvent;
    
    UPROPERTY(EditAnywhere)
    uint32 debugEtcFlags;
    
    UPROPERTY(EditAnywhere)
    uint32 debugActionFlags2;
    
    UPROPERTY(EditAnywhere)
    uint32 debugDrawFlags2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugForcePersuade forcePersuade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugVoteResult voteResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 battleAttackAlwaysDeadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 battleAttackDamageZeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 battleDorpItemRarity;
    
public:
    UNeweraDebugSetting();
    UFUNCTION(BlueprintCallable)
    static void SetSaveLoadErrorCode(int32 NewSaveLoadErrorCode);
    
    UFUNCTION(BlueprintCallable)
    static void SetReverseCameraV(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    static void SetReverseCameraH(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuickCameraRotation(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessGammaRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessGainRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessEdgeBurnWeight(float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameTypeVersion(int32 NewGameTypeVersion);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameDifficulty(int32 difficulty);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameClearCount(int32 NewGameClearCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableStandbyCamera(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableSkipUnitRotate(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnablePickUpTarget(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableForceFeedback(bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableCursorBaseRotateByStickCheck(const UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetElapsedTimeBattleType(int32 NewElapsedTimeBattleType);
    
    UFUNCTION(BlueprintCallable)
    static void SetElapsedTimeBattle(float NewElapsedTimeBattle);
    
    UFUNCTION(BlueprintCallable)
    static void SetDispTextRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugWorldMapFlag(EDebugWorldMapFlags flag, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugVoteResult(EDebugVoteResult Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugSoundFlag(EDebugSoundFlags flag, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMapTimeStart(float mapTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMapTimeProgressSecondsPerHour(float secondsPerHour);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelUserKobayashi(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelSound(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelEvent(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelCellEvaluation(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelBattleFlow(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelBattleDamage(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugLogLevelAI(EDebugLogLevel InLogLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugForcePersuade(EDebugForcePersuade Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugEtcFlag(EDebugEtcFlags flag, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugDrawFlag2(EDebugDrawFlags2 flag, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugDrawFlag(EDebugDrawFlags flag, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugActionFlag2(EDebugActionFlags2 flag, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugActionFlag(EDebugActionFlags flag, bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCursorBaseRotateByStickAxisSizeMin(const UObject* WorldContextObject, float Val);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCursorBaseRotateByStickAxisDotMin(const UObject* WorldContextObject, float Val);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraSpeedRateV(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraSpeedRateH(float Rate);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleUnitMoveSpeedRate(float Speed);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleSequencerPlaySpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleDropItemRarity(int32 rarity);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleCursorPadDirMode(EBattleCursorPadDirMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleAutoSave(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleAttackDamageZeroType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleAttackAlwaysDeadType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleAlwaysFastForward(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static UNeweraDebugSetting* Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugWorldMapFlagOn(EDebugWorldMapFlags flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugSoundFlagOn(EDebugSoundFlags flag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugEtcFlagOn(EDebugEtcFlags flag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugDrawFlagOn(EDebugDrawFlags flag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugDrawFlag2On(EDebugDrawFlags2 flag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugActionFlagOn(EDebugActionFlags flag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugActionFlag2On(EDebugActionFlags2 flag);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSaveLoadErrorCode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetReverseCameraV();
    
    UFUNCTION(BlueprintCallable)
    static bool GetReverseCameraH();
    
    UFUNCTION(BlueprintCallable)
    static bool GetQuickCameraRotation();
    
    UFUNCTION(BlueprintCallable)
    static float GetPostProcessGammaRate();
    
    UFUNCTION(BlueprintCallable)
    static float GetPostProcessGainRate();
    
    UFUNCTION(BlueprintCallable)
    static float GetPostProcessEdgeBurnWeight();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameTypeVersion();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameDifficultyBP();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameClearCount();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableStandbyCamera();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableSkipUnitRotate();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnablePickUpTarget();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableForceFeedback();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableCursorBaseRotateByStickCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetElapsedTimeBattleType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetElapsedTimeBattle();
    
    UFUNCTION(BlueprintCallable)
    static float GetDispTextRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugVoteResult GetDebugVoteResult();
    
    UFUNCTION(BlueprintCallable)
    static float GetDebugMapTimeStart();
    
    UFUNCTION(BlueprintCallable)
    static float GetDebugMapTimeProgressSecondsPerHour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelUserKobayashi();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelSound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelCellEvaluation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelBattleFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelBattleDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugLogLevel GetDebugLogLevelAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDebugForcePersuade GetDebugForcePersuade();
    
    UFUNCTION(BlueprintCallable)
    static float GetCursorBaseRotateByStickAxisSizeMin();
    
    UFUNCTION(BlueprintCallable)
    static float GetCursorBaseRotateByStickAxisDotMin();
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraSpeedRateV();
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraSpeedRateH();
    
    UFUNCTION(BlueprintCallable)
    static float GetBattleUnitMoveSpeedRate();
    
    UFUNCTION(BlueprintCallable)
    static float GetBattleSequencerPlaySpeed();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleDropItemRarity();
    
    UFUNCTION(BlueprintCallable)
    static EBattleCursorPadDirMode GetBattleCursorPadDirMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBattleAutoSave();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleAttackDamageZeroType();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBattleAttackAlwaysDeadType();
    
    UFUNCTION(BlueprintCallable)
    static bool GetBattleAlwaysFastForward();
    
    UFUNCTION(BlueprintCallable)
    static void ClearSaveLoadErrorCode();
    
    UFUNCTION(BlueprintCallable)
    static void ClearGameTypeVersion();
    
    UFUNCTION(BlueprintCallable)
    static void ClearGameClearCount();
    
    UFUNCTION(BlueprintCallable)
    static void ClearEtcData();
    
    UFUNCTION(BlueprintCallable)
    static void ClearElapsedTimeBattleType();
    
    UFUNCTION(BlueprintCallable)
    static void ClearElapsedTimeBattle();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugWorldMapFlags();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugVoteResult();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugSoundFlags();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugMapTimeStart();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugMapTimeProgressSecondsPerHour();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugForcePersuade();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugEtcFlags();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugDrawFlags2();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugDrawFlags();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugActionFlags2();
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugActionFlags();
    
};

