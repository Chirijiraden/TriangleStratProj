#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "NeweraDataAssetImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UNeweraDataAssetImage : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture2D>> ImageList;
    
public:
    UNeweraDataAssetImage();
};

