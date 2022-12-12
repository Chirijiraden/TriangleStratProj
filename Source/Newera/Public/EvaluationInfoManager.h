#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleFlowStateReceiverInterface.h"
#include "EvaluationInfoManager.generated.h"

class UEvaluationInfoUnit;
class UEvaluationInfoInterface;
class IEvaluationInfoInterface;

UCLASS(Blueprintable)
class UEvaluationInfoManager : public UObject, public IBattleFlowStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    TMap<uint32, UEvaluationInfoUnit*> UnitEvaluationInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IEvaluationInfoInterface> CurrentAsyncTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IEvaluationInfoInterface>> AsyncTaskQueue;
    
public:
    UEvaluationInfoManager();
    
    // Fix for true pure virtual functions not being implemented
};

