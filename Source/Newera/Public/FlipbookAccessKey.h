#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.h"
#include "ENeweraFlipbookOverrideType.h"
#include "EweaponRank.h"
#include "FlipbookAccessKey.generated.h"

USTRUCT(BlueprintType)
struct FFlipbookAccessKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraFlipbookOverrideType NeweraFlipbookOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EweaponRank WeaponRank;
    
    NEWERA_API FFlipbookAccessKey();
};

