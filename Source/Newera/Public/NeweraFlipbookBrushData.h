#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "NeweraFlipbookBrushData.generated.h"

USTRUCT(BlueprintType)
struct FNeweraFlipbookBrushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CustomPivotOffset;
    
    NEWERA_API FNeweraFlipbookBrushData();
};

