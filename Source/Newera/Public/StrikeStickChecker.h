#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StrikeStickChecker.generated.h"

UCLASS(Blueprintable, Config=Game)
class NEWERA_API UStrikeStickChecker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrikeStickTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrikeStickTimeMin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrikeStickInputMin;
    
    UStrikeStickChecker();
};

