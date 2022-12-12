#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleFlowStateReceiverInterface.h"
#include "NeweraRouteSearchManager.generated.h"

class UNeweraAStarAlgorithm;
class UNeweraRouteSearchManager;

UCLASS(Blueprintable)
class UNeweraRouteSearchManager : public UObject, public IBattleFlowStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraAStarAlgorithm* Algorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraAStarAlgorithm* AlgorithmForAsyncTask;
    
public:
    UNeweraRouteSearchManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNeweraRouteSearchManager* GetInstance();
    
    
    // Fix for true pure virtual functions not being implemented
};

