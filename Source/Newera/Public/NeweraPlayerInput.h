#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraPlayerInput.generated.h"

UCLASS(Blueprintable, Config=Game)
class NEWERA_API UNeweraPlayerInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRepeatStartTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRepeatSpanTime;
    
    UNeweraPlayerInput();
};

