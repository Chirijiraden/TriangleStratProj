#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETerritoryType.h"
#include "WorldMapAreaPart.generated.h"

UCLASS(Blueprintable)
class AWorldMapAreaPart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETerritoryType TerritoryType;
    
    AWorldMapAreaPart();
};

