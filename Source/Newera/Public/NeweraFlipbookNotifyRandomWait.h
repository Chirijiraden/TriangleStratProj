#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "UObject/NoExportTypes.h"
#include "NeweraFlipbookNotifyRandomWait.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifyRandomWait : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WaitValue;
    
public:
    UNeweraFlipbookNotifyRandomWait();
};

