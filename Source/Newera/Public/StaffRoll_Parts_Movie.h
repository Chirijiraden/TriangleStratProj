#pragma once
#include "CoreMinimal.h"
#include "StaffRoll_Parts_Base.h"
#include "StaffRoll_Parts_Movie.generated.h"

class UNeweraManaMovieWidget;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UStaffRoll_Parts_Movie : public UStaffRoll_Parts_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraManaMovieWidget* NeweraManaMovieWidget;
    
public:
    UStaffRoll_Parts_Movie();
};

