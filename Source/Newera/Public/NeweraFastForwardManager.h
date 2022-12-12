#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleFlowStateReceiverInterface.h"
#include "FastForwardStateReceiverNest.h"
#include "NeweraFastForwardManager.generated.h"

class UCommon_Auto;
class UCommon_FastForward;

UCLASS(Blueprintable)
class UNeweraFastForwardManager : public UObject, public IBattleFlowStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_FastForward* WidgetFastForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Auto* WidgetAuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFastForwardStateReceiverNest> StateReceivers;
    
public:
    UNeweraFastForwardManager();
    
    // Fix for true pure virtual functions not being implemented
};

