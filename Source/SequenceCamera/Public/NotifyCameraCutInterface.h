#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NotifyCameraCutInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UNotifyCameraCutInterface : public UInterface {
    GENERATED_BODY()
};

class INotifyCameraCutInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyCameraCut();
    
};

