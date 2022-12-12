#pragma once
#include "CoreMinimal.h"
#include "NeweraGameStateBase.h"
#include "NeweraGameStateBattle.generated.h"

class UAbilityTimeManager;
class UBattleTutorialTrigger;
class UBattleExperienceManager;
class UBattleEventObserver;
class UBattleCursorHitRecorder;
class UBattleAIMan;
class UDropItemManagerBattle;
class UDeferredSpawnActorManager;
class UEvaluationInfoManager;
class UExtraExploitEventObserver;
class ULadderManager;
class UKnockBackManager;
class UNeweraFlowManagerBattle;
class UTurretManager;
class UTrapManager;

UCLASS(Blueprintable)
class NEWERA_API ANeweraGameStateBattle : public ANeweraGameStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKnockBackManager> KnockBackManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattleCursorHitRecorder* cursorHitRecorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattleAIMan* BattleAIMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattleEventObserver* BattleEventObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattleTutorialTrigger* BattleTutorialTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UExtraExploitEventObserver* ExtraExploitEventObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattleExperienceManager* BattleExperienceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDropItemManagerBattle* DropItemManagerBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTrapManager* TrapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTurretManager* TurretManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULadderManager* LadderManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeferredSpawnActorManager* DeferredSpawnActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTimeManager* AbilityTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraFlowManagerBattle* FlowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKnockBackManager* KnockBackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEvaluationInfoManager* EvaluationInfoManager;
    
public:
    ANeweraGameStateBattle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTurretManager* GetTurretManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrapManager* GetTrapManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULadderManager* GetLadderManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDropItemManagerBattle* GetDropItemManagerBattle() const;
    
};

