#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "EFootstepDirectionType.h"
#include "NeweraFlipbookNotifySeFootstep.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifySeFootstep : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootstepDirectionType FootstepDirectionType;
    
public:
    UNeweraFlipbookNotifySeFootstep();
};

