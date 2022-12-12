#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "LoadableImage.generated.h"

class UWidget;
class UUITextureManager;

UCLASS(Blueprintable)
class NEWERA_API ULoadableImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUITextureManager* TexManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LoadingWidget;
    
public:
    ULoadableImage();
};

