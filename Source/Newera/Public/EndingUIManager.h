#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndingUIManager.generated.h"

class UDemo_End_ThanksPlaying;
class UDemo_End_Staff;
class UNeweraDataAssetStaffRoll;
class UStaffRoll_Main;

UCLASS(Blueprintable)
class NEWERA_API UEndingUIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetStaffRoll* NeweraDataAssetStaffRoll;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDemo_End_ThanksPlaying* widgetDemoEndThanksPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDemo_End_Staff* widgetDemoEndStaff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaffRoll_Main* widgetStaffRollMain;
    
public:
    UEndingUIManager();
};

