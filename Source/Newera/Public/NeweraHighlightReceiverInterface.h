#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NeweraHighlightReceiverInterface.generated.h"

UINTERFACE(Blueprintable)
class UNeweraHighlightReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class INeweraHighlightReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndHighlighting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginHighlighting();
    
};

