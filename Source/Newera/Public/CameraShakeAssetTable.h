#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CameraShakeAssetTable.generated.h"

class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct FCameraShakeAssetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMatineeCameraShake> CameraShake;
    
    NEWERA_API FCameraShakeAssetTable();
};

