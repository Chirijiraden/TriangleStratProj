#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "UObject/NoExportTypes.h"
#include "EventEffectAttackPos.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventEffectAttackPos : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString effectRangeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString effectNameStr;
    
    AEventEffectAttackPos();
};

