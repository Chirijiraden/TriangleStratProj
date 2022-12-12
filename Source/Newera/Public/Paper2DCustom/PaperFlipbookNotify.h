#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PaperFlipbookNotify.generated.h"

UCLASS(Abstract, Blueprintable)
class PAPER2D_API UPaperFlipbookNotify : public UObject {
    GENERATED_BODY()
public:
    UPaperFlipbookNotify();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotify(UPaperFlipbookComponent* PaperFlipbookComponent) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void DeepCopy(const UPaperFlipbookNotify* SrcObject);
    
};

