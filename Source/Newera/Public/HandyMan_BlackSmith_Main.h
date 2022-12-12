#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "HandyMan_BlackSmith_Main.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UHandyMan_BlackSmith_Main : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeRateBGMInEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float durationSecForVolumeRateBGMInEffect;
    
public:
    UHandyMan_BlackSmith_Main();
};

