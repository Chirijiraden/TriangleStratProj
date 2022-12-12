#pragma once
#include "CoreMinimal.h"
#include "UITextureLoadParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUITextureLoadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    NEWERA_API FUITextureLoadParam();
};

