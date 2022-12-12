#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TitleUIManager.generated.h"

class UDemo_ThanksDialog;
class UNeweraDataAssetStaffRoll;
class UTitle_Movie;
class UTitle_Main;
class UTitle_Logo_Main;
class UStaffRoll_Main;

UCLASS(Blueprintable)
class NEWERA_API UTitleUIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetStaffRoll* NeweraDataAssetStaffRoll;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTitle_Logo_Main* widgetTitleLogoMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTitle_Main* widgetTitleMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTitle_Movie* widgetTitleMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDemo_ThanksDialog* widgetDemoThanksDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaffRoll_Main* widgetStaffRollMain;
    
public:
    UTitleUIManager();
};

