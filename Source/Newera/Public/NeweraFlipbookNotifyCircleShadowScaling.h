#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "UObject/NoExportTypes.h"
#include "NeweraFlipbookNotifyCircleShadowScaling.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifyCircleShadowScaling : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scaling;
    
public:
    UNeweraFlipbookNotifyCircleShadowScaling();
};

