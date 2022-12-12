#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EActorType.h"
#include "ActorListComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UActorListComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActorType> ActorTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActorType> DyanmicActorTypes;
    
    UActorListComponent();
};

