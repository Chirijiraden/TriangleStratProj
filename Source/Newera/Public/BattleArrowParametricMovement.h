#pragma once
#include "CoreMinimal.h"
#include "NeweraProjectileMovement.h"
#include "BattleArrowParametricMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UBattleArrowParametricMovement : public UNeweraProjectileMovement {
    GENERATED_BODY()
public:
    UBattleArrowParametricMovement();
};

