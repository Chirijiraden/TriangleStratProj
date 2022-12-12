#pragma once
#include "CoreMinimal.h"
#include "EMapGridObjectType.h"
#include "MapGridObjectInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMapGridObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EMapGridObjectType, AActor*> MapGridObjectActors;
    
    NEWERA_API FMapGridObjectInfo();
};

