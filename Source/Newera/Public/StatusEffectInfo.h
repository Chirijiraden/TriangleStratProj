#pragma once
#include "CoreMinimal.h"
#include "StatusEffectInfo.generated.h"

class UFXSystemComponent;

USTRUCT(BlueprintType)
struct FStatusEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* durationEffect;
    
    NEWERA_API FStatusEffectInfo();
};

