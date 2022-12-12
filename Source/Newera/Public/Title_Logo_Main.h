#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Title_Logo_Main.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UTitle_Logo_Main : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LogoAnimationNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> StartTimeOfEnablingLogoSkipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorporationLogoStartIndex;
    
    UTitle_Logo_Main();
};

