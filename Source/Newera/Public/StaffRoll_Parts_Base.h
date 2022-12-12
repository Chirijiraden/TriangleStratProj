#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "StaffRoll_Parts_Base.generated.h"

class UStaffRollManager;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UStaffRoll_Parts_Base : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaffRollManager* pStaffRollManager;
    
public:
    UStaffRoll_Parts_Base();
};

