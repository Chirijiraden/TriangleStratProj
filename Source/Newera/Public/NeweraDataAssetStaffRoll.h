#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "StaffRollMisc.h"
#include "NeweraDataAssetStaffRoll.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class NEWERA_API UNeweraDataAssetStaffRoll : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaffRollMisc StaffRollMisc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffRollPartsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffRollStaffListLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffRollEntryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffRollStaffRollDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StaffRollClearRouteDataTable;
    
    UNeweraDataAssetStaffRoll();
};

