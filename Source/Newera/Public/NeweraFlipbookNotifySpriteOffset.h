#pragma once
#include "CoreMinimal.h"
#include "NeweraFlipbookNotifyBase.h"
#include "UObject/NoExportTypes.h"
#include "NeweraFlipbookNotifySpriteOffset.generated.h"

UCLASS(Blueprintable)
class UNeweraFlipbookNotifySpriteOffset : public UNeweraFlipbookNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
public:
    UNeweraFlipbookNotifySpriteOffset();
};

