#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DemoEndingUIManager.generated.h"

class UDemo_End_ThanksPlaying;
class UDemo_End_Staff;

UCLASS(Blueprintable)
class NEWERA_API UDemoEndingUIManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDemo_End_ThanksPlaying* widgetDemoEndThanksPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDemo_End_Staff* widgetDemoEndStaff;
    
public:
    UDemoEndingUIManager();
};

