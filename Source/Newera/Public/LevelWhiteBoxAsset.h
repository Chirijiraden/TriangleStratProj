#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelWhiteBoxCameraData.h"
#include "LevelWhiteBoxAsset.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ULevelWhiteBoxAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> bulkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLevelWhiteBoxCameraData> CameraSettings;
    
    ULevelWhiteBoxAsset();
};

