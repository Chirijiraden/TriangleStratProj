#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SequenceEventStartUnderDirection.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventStartUnderDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor lightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor skySphereOverallColor;
    
    NEWERA_API FSequenceEventStartUnderDirection();
};

