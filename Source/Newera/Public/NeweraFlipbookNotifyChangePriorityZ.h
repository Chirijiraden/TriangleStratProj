#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Paper2D -ObjectName=EFlipbookDirectionType -FallbackName=EFlipbookDirectionType
#include "NeweraFlipbookNotifyChangePriorityZ.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifyChangePriorityZ : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFlipbookDirectionType, int32> Priorities;
    
public:
    UNeweraFlipbookNotifyChangePriorityZ();
};

