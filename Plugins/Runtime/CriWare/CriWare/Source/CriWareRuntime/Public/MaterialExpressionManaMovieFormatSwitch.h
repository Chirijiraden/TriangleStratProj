#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "UObject/NoExportTypes.h"
#include "MaterialExpressionManaMovieFormatSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_MaterialExpressionManaMovieFormatSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FExpressionInput Inputs[5];
    
    UDEPRECATED_MaterialExpressionManaMovieFormatSwitch();
};

