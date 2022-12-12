#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraUIWidgetParam.generated.h"

class UNeweraUIWidget;

UCLASS(Blueprintable)
class NEWERA_API UNeweraUIWidgetParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNeweraUIWidget*> CommonBaseWidgets;
    
    UNeweraUIWidgetParam();
};

