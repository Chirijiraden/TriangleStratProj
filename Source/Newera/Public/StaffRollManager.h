#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StaffRollManager.generated.h"

class UNeweraDataAssetStaffRoll;
class UStaffRoll_Parts_Base;
class UCanvasPanel;

UCLASS(Blueprintable)
class NEWERA_API UStaffRollManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* canvasPanelRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetStaffRoll* NeweraDataAssetStaffRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaffRoll_Parts_Base*> widgetParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaffRoll_Parts_Base*> removeWidgetParts;
    
public:
    UStaffRollManager();
};

