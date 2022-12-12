#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMapResumableObjectInterface.h"
#include "WorldMapNarrationPathPart.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class AWorldMapNarrationPathPart : public AActor, public IWorldMapResumableObjectInterface {
    GENERATED_BODY()
public:
    AWorldMapNarrationPathPart();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UDecalComponent* GetDecalComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

