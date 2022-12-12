#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventOpenUIAbilityName.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventOpenUIAbilityName : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float openTime;
    
    AEventOpenUIAbilityName();
};

