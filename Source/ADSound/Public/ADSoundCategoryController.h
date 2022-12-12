#pragma once
#include "CoreMinimal.h"
#include "ADSoundCategoryParamAccessor.h"
#include "ADSoundCategoryId.h"
#include "ADSoundCategoryParams.h"
#include "ADSoundCategoryController.generated.h"

UCLASS(Blueprintable)
class UADSoundCategoryController : public UADSoundCategoryParamAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FADSoundCategoryId, FADSoundCategoryParams> MapCategoryParams;
    
public:
    UADSoundCategoryController();
};

