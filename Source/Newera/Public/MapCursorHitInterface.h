#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MapCursorHitInterface.generated.h"

UINTERFACE(Blueprintable)
class UMapCursorHitInterface : public UInterface {
    GENERATED_BODY()
};

class IMapCursorHitInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCursorLeave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCursorEnter();
    
};

