#pragma once
#include "CoreMinimal.h"
#include "NeweraProjectileMovement.h"
#include "SimpleArrowMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API USimpleArrowMovement : public UNeweraProjectileMovement {
    GENERATED_BODY()
public:
    USimpleArrowMovement();
};

