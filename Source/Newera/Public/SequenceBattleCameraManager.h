#pragma once
#include "CoreMinimal.h"
#include "SequenceCameraManager.h"
#include "SequenceEventSpawnActor.h"
#include "SequenceEventSpawnActorBurnable.h"
#include "SequenceEventSpawnUnit.h"
#include "SequenceEventKillUnit.h"
#include "SequenceEventSwapTargetUnit.h"
#include "SequenceEventChangeEffectVisibilityWithUnit.h"
#include "SequenceEventChangeBattleCursorParam.h"
#include "SequenceEventSpawnRebornUnit.h"
#include "ChangeBattleIdleAnim.h"
#include "SequenceEventDamageReaction.h"
#include "SequenceEventStartUnderDirection.h"
#include "SequenceEventEndUnderDirection.h"
#include "SequenceEventChangeAttacker.h"
#include "SequenceEventJumpLabel.h"
#include "SequenceEventPursuitLoopLabel.h"
#include "SequenceEventSlideAction.h"
#include "SequenceEventMoveUnitParam.h"
#include "SequenceEventOpenUIAbilityNameParam.h"
#include "SequenceEventSpawnGimmick.h"
#include "SequenceEventFinishSpawn.h"
#include "SequenceEventCommonParam.h"
#include "SequenceEventEffectParam.h"
#include "SequenceEventEffectAttackPosParam.h"
#include "SequenceEventChangeActionParam.h"
#include "SequenceEventCameraShakeParam.h"
#include "SequenceEventCameraShakeForHitParam.h"
#include "SequenceEventApplyDamageParam.h"
#include "SequenceEventOnHpZeroParam.h"
#include "SequenceEventPlaySEParam.h"
#include "SequenceEventPlaySE2Param.h"
#include "SequenceEventChangeVisibilityParam.h"
#include "SequenceEventSpawnProjectileParam.h"
#include "SequenceEventLaunchProjectileParam.h"
#include "Camera/PlayerCameraManager.h"
#include "SequenceBattleCameraManager.generated.h"

class AActor;
class UActorListComponent;
class ANeweraProjectileActor;
class ASequenceCameraSettingActor;
class ASequenceBattleCameraManager;
class ULevelSequence;

UCLASS(Blueprintable)
class NEWERA_API ASequenceBattleCameraManager : public ASequenceCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorListComponent* ActorListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> levelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<ULevelSequence>> levelSequencesForGeneral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fastForwardRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANeweraProjectileActor*> spawnedProjectiles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* attackTargetPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASequenceCameraSettingActor* SequenceCameraSettingActor;
    
public:
    ASequenceBattleCameraManager();
    UFUNCTION(BlueprintCallable)
    void NeweraBlendWithParam(const FSequenceEventCommonParam& eventCommonParam, const FViewTargetTransitionParams& InBlendParam_, const FViewTargetTransitionParams& OutBlendParam_);
    
    UFUNCTION(BlueprintCallable)
    void NeweraBlendOutWithParam(const FSequenceEventCommonParam& eventCommonParam, const FViewTargetTransitionParams& OutBlendParam_);
    
    UFUNCTION(BlueprintCallable)
    void NeweraBlendOut(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void NeweraBlendInWithParam(const FSequenceEventCommonParam& eventCommonParam, const FViewTargetTransitionParams& InBlendParam_);
    
    UFUNCTION(BlueprintCallable)
    void NeweraBlendIn(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void NeweraBlend(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSequenceFrameNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASequenceBattleCameraManager* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void EventVanishUnitOnMap(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSwapUnitPos(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSwapTargetUnit& eventSwapTargetUnitParam);
    
    UFUNCTION(BlueprintCallable)
    void EventStartUnderDirection(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventStartUnderDirection& NewEventStartUnderDirection);
    
    UFUNCTION(BlueprintCallable)
    void EventSpawnUnit(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSpawnUnit& eventSpawnUnitParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSpawnRebornUnit(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSpawnRebornUnit& eventSpwanRebornUnitParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSpawnProjectile(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSpawnProjectileParam& eventSpawnProjectileParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSpawnGimmick(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSpawnGimmick& eventSpawnGimmickParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSpawnActorBurnable(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSpawnActorBurnable& eventSpawnActorParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSpawnActor(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSpawnActor& eventSpawnActorParam);
    
    UFUNCTION(BlueprintCallable)
    void EventSlideAction(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventSlideAction& NewEventSlideAction);
    
    UFUNCTION(BlueprintCallable)
    void EventRotateUnitReservedDir(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void EventReverseKnockBackDone(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventDamageReaction& NewEventDamageReaction);
    
    UFUNCTION(BlueprintCallable)
    void EventPursuitLoop(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventPursuitLoopLabel& NewEventPursuitLoop);
    
    UFUNCTION(BlueprintCallable)
    void EventPlaySE2(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventPlaySE2Param& eventPlaySEParam2);
    
    UFUNCTION(BlueprintCallable)
    void EventPlaySE(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventPlaySEParam& eventPlaySEParam);
    
    UFUNCTION(BlueprintCallable)
    void EventPlayEnd(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void EventOpenUIAbilityName(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventOpenUIAbilityNameParam& NewEventOpenUIAbilityName);
    
    UFUNCTION(BlueprintCallable)
    void EventOnHpZero(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventOnHpZeroParam& eventOnHpZeroParam);
    
    UFUNCTION(BlueprintCallable)
    void EventMoveUnitReservedPos(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void EventMoveUnit(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventMoveUnitParam& NewEventMoveUnit);
    
    UFUNCTION(BlueprintCallable)
    void EventLaunchProjectile(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventLaunchProjectileParam& eventLaunchProjectileParam);
    
    UFUNCTION(BlueprintCallable)
    void EventKillUnit(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventKillUnit& eventKillUnitParam);
    
    UFUNCTION(BlueprintCallable)
    void EventJumpLabel(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventJumpLabel& NewEventJumpLabel);
    
    UFUNCTION(BlueprintCallable)
    void EventFinishSpawn(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventFinishSpawn& NewEventFinishSpawn);
    
    UFUNCTION(BlueprintCallable)
    void EventEndUnderDirection(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventEndUnderDirection& NewEventEndUnderDirection);
    
    UFUNCTION(BlueprintCallable)
    void EventEffectAttackPos(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventEffectAttackPosParam& eventEffectParam);
    
    UFUNCTION(BlueprintCallable)
    void EventEffect(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventEffectParam& eventEffectParam);
    
    UFUNCTION(BlueprintCallable)
    void EventDeactivateMimic(const FSequenceEventCommonParam& eventCommonParam);
    
    UFUNCTION(BlueprintCallable)
    void EventDamageReaction(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventDamageReaction& NewEventDamageReaction);
    
    UFUNCTION(BlueprintCallable)
    void EventChangeVisibility(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventChangeVisibilityParam& eventChangeVisibilityParam);
    
    UFUNCTION(BlueprintCallable)
    void EventChangeEffectVisibilityWithUnit(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventChangeEffectVisibilityWithUnit& eventChangeVisibilityParam);
    
    UFUNCTION(BlueprintCallable)
    void EventChangeBattleIdleAnim(const FSequenceEventCommonParam& eventCommonParam, const FChangeBattleIdleAnim& eventChangeBattleIdleAnimParam);
    
    UFUNCTION(BlueprintCallable)
    void EventChangeBattleCursor(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventChangeBattleCursorParam& changeBattleCursor);
    
    UFUNCTION(BlueprintCallable)
    bool EventChangeAttacker(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventChangeAttacker& NewEventChangeAttacker);
    
    UFUNCTION(BlueprintCallable)
    void EventChangeAction(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventChangeActionParam& eventChangeActionParam);
    
    UFUNCTION(BlueprintCallable)
    void EventCameraShakeForHit(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventCameraShakeForHitParam& eventCameraShakeForHitParam);
    
    UFUNCTION(BlueprintCallable)
    void EventCameraShake(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventCameraShakeParam& eventCameraShakeParam);
    
    UFUNCTION(BlueprintCallable)
    void EventApplyDamage(const FSequenceEventCommonParam& eventCommonParam, const FSequenceEventApplyDamageParam& eventApplyDamageParam);
    
};

