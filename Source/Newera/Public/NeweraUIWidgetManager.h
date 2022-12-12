#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraUIWidgetManager.generated.h"

class UNeweraUIWidgetParam;

UCLASS(Blueprintable)
class NEWERA_API UNeweraUIWidgetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNeweraUIWidgetParam*> widgetParams;
    
public:
    UNeweraUIWidgetManager();
};

