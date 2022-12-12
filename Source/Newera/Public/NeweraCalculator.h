#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KnockBackDamageCalculateParamBP.h"
#include "NeweraCalculator.generated.h"

UCLASS(Blueprintable)
class UNeweraCalculator : public UObject {
    GENERATED_BODY()
public:
    UNeweraCalculator();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CalcKnockbackDamageHit(const FKnockBackDamageCalculateParamBP& Params) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 CalcKnockbackDamageFall(const FKnockBackDamageCalculateParamBP& Params) const;
    
};

