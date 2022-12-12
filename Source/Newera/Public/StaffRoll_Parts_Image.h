#pragma once
#include "CoreMinimal.h"
#include "StaffRoll_Parts_Base.h"
#include "StaffRoll_Parts_Image.generated.h"

class ULoadableImage;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UStaffRoll_Parts_Image : public UStaffRoll_Parts_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadableImage* LoadableImage;
    
    UStaffRoll_Parts_Image();
};

