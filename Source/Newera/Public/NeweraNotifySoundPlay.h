#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "NeweraNotifySoundPlay.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class NEWERA_API UNeweraNotifySoundPlay : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GopId;
    
public:
    UNeweraNotifySoundPlay();
};

