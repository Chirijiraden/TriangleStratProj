#pragma once
#include "CoreMinimal.h"
#include "NeweraProjectileMovement.h"
#include "SimpleStoneMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API USimpleStoneMovement : public UNeweraProjectileMovement {
    GENERATED_BODY()
public:
    USimpleStoneMovement();
};

