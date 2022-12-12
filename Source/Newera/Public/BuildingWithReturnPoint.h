#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResearchCommandInterface.h"
#include "ReturnPointInformation.h"
#include "BuildingWithReturnPoint.generated.h"

class UActorListComponent;
class ALuaTriggerBox;
class UNeweraResearchEnterCommand;

UCLASS(Blueprintable)
class NEWERA_API ABuildingWithReturnPoint : public AActor, public IResearchCommandInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FReturnPointInformation> ReturnPointInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALuaTriggerBox*> triggerBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorListComponent* ActorListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraResearchEnterCommand* enterCommand;
    
public:
    ABuildingWithReturnPoint();
    
    // Fix for true pure virtual functions not being implemented
};

