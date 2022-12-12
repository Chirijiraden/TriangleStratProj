#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NeweraControllInterface.generated.h"

class ANeweraPlayerControllerBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UNeweraControllInterface : public UInterface {
    GENERATED_BODY()
};

class INeweraControllInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnControllerUpdate(const ANeweraPlayerControllerBase* PlayerController, float DeltaSeconds);
    
};

