#pragma once
#include "CoreMinimal.h"
#include "StaffListTextLayoutParam.generated.h"

USTRUCT(BlueprintType)
struct NEWERA_API FStaffListTextLayoutParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignmentX;
    
    FStaffListTextLayoutParam();
};

