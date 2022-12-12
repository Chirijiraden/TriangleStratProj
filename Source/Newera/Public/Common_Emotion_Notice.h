#pragma once
#include "CoreMinimal.h"
#include "NeweraFloatUIBase.h"
#include "Common_Emotion_Notice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Emotion_Notice : public UNeweraFloatUIBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutWaitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipPlaySpeed;
    
    UCommon_Emotion_Notice();
};

