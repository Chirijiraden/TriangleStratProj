#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EActorType.h"
#include "ActorListMan.generated.h"

class AActor;
class UActorListMan;

UCLASS(Blueprintable)
class NEWERA_API UActorListMan : public UObject {
    GENERATED_BODY()
public:
    UActorListMan();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorListMan* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorListInRange(EActorType actorType, const FVector& Center, float Radius, bool bIgnoreZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorList(EActorType actorType) const;
    
};

