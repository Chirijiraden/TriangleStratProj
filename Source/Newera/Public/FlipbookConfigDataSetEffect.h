#pragma once
#include "CoreMinimal.h"
#include "FlipbookConfigDataEffect.h"
#include "FlipbookConfigDataSetEffect.generated.h"

USTRUCT(BlueprintType)
struct FFlipbookConfigDataSetEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookConfigDataEffect Effect001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookConfigDataEffect Effect002;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookConfigDataEffect Effect003;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookConfigDataEffect Effect004;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookConfigDataEffect Effect005;
    
    NEWERA_API FFlipbookConfigDataSetEffect();
};

