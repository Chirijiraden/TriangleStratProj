#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraFlipbookFL.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class UNeweraFlipbookFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraFlipbookFL();
    UFUNCTION(BlueprintCallable)
    static bool ReplaceSprites(const FString& SrcId, UPaperFlipbook* DestFlipbook, const FString& DestId);
    
    UFUNCTION(BlueprintCallable)
    static void CopySpriteSockets(const UPaperFlipbook* SrcFlipbook, UPaperFlipbook* DestFlipbook);
    
};

