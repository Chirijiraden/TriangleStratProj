#pragma once
#include "CoreMinimal.h"
#include "BuffDebuffEffectInfo.generated.h"

class UFXSystemComponent;

USTRUCT(BlueprintType)
struct FBuffDebuffEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* durationEffect;
    
    NEWERA_API FBuffDebuffEffectInfo();
};

