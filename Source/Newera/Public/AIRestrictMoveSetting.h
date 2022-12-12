#pragma once
#include "CoreMinimal.h"
#include "AISettingBase.h"
#include "UObject/NoExportTypes.h"
#include "AIRestrictMoveSetting.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UAIRestrictMoveSetting : public UAISettingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> MovableGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> TargetGrid;
    
public:
    UAIRestrictMoveSetting();
};

