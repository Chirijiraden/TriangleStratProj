#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugMenuOpenActor.generated.h"

UCLASS(Blueprintable)
class ADebugMenuOpenActor : public AActor {
    GENERATED_BODY()
public:
    ADebugMenuOpenActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDebugMenu(int32 MenuType);
    
};

