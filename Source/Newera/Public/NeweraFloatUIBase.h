#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "NeweraFloatUIBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UNeweraFloatUIBase : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset2DPosition;
    
    UNeweraFloatUIBase();
};

