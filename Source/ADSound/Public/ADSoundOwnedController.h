#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ADSoundOwnedController.generated.h"

class UADSoundPlayerPoolAccessor;

UCLASS(Blueprintable)
class UADSoundOwnedController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundPlayerPoolAccessor* PlayerPoolAccessor;
    
public:
    UADSoundOwnedController();
};

