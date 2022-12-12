#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELuaFlag.h"
#include "EWorldMapPlacedObjectState.h"
#include "WorldMapPlacedObjectBase.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EWorldMapPlacedObjectState, ELuaFlag> StateRequirementFlags;
    
public:
    AWorldMapPlacedObjectBase();
};

