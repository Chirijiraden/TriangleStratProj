#pragma once
#include "CoreMinimal.h"
#include "BurnableInterface.h"
#include "NeweraMapGimmickObject.h"
#include "GimmickBurnableBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AGimmickBurnableBase : public ANeweraMapGimmickObject, public IBurnableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrushedObjectName;
    
    AGimmickBurnableBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRepraceObject(bool burning);
    
    
    // Fix for true pure virtual functions not being implemented
};

