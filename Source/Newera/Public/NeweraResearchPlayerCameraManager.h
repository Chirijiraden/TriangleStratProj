#pragma once
#include "CoreMinimal.h"
#include "NeweraPlayerCameraManager.h"
#include "NeweraResearchPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraResearchPlayerCameraManager : public ANeweraPlayerCameraManager {
    GENERATED_BODY()
public:
    ANeweraResearchPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void DebugMenuResetCamera();
    
};

