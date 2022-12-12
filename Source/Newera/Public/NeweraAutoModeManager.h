#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutoModeStateReceiverNest.h"
#include "NeweraAutoModeManager.generated.h"

UCLASS(Blueprintable)
class UNeweraAutoModeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAutoModeStateReceiverNest> StateReceivers;
    
public:
    UNeweraAutoModeManager();
};

