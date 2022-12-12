#pragma once
#include "CoreMinimal.h"
#include "NeweraMapGimmickObject.h"
#include "NeweraTreasureChest.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraTreasureChest : public ANeweraMapGimmickObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TreasureIdInBox;
    
public:
    ANeweraTreasureChest();
    UFUNCTION(BlueprintCallable)
    int32 OpenTreasureChest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostSpawnedBP();
    
    UFUNCTION(BlueprintCallable)
    void DeleteTreasureChest();
    
};

