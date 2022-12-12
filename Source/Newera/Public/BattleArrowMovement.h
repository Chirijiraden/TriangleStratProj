#pragma once
#include "CoreMinimal.h"
#include "NeweraProjectileMovement.h"
#include "BattleArrowMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UBattleArrowMovement : public UNeweraProjectileMovement {
    GENERATED_BODY()
public:
    UBattleArrowMovement();
};

