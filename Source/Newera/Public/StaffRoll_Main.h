#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "StaffRoll_Main.generated.h"

class UNeweraDataAssetStaffRoll;
class UStaffRollManager;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UStaffRoll_Main : public UCommonBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* canvasPanelRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaffRollManager* StaffRollManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetStaffRoll* NeweraDataAssetStaffRoll;
    
public:
    UStaffRoll_Main();
};

