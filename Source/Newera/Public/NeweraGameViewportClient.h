#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "NeweraGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class NEWERA_API UNeweraGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UNeweraGameViewportClient();
};

