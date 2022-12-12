#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "DebugResearchCursorMan.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ADebugResearchCursorMan : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DebugCameraInfoWidgetClass;
    
    ADebugResearchCursorMan();
};

