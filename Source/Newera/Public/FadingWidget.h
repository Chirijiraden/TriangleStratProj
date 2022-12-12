#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "FadingWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UFadingWidget : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* BGImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* BalanceImage;
    
public:
    UFadingWidget();
};

