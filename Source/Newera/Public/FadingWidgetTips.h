#pragma once
#include "CoreMinimal.h"
#include "FadingWidget.h"
#include "FadingWidgetTips.generated.h"

class UCommon_Loading_Tutorial;

UCLASS(Blueprintable, EditInlineNew)
class UFadingWidgetTips : public UFadingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Loading_Tutorial* TutorialDetailWnd;
    
public:
    UFadingWidgetTips();
};

