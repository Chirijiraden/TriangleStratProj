#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "HandyMan_BlackSmith_Rank_DotCharaPict.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UHandyMan_BlackSmith_Rank_DotCharaPict : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AddColorGrayoutEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeGrayoutEffectTime;
    
public:
    UHandyMan_BlackSmith_Rank_DotCharaPict();
protected:
    UFUNCTION(BlueprintCallable)
    void StartChangingGrayoutEffect();
    
};

