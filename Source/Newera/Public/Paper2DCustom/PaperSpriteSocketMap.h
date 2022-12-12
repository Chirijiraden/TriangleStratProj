#pragma once
#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "PaperSpriteSocketMap.generated.h"

USTRUCT(BlueprintType)
struct FPaperSpriteSocketMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FPaperSpriteSocket> Sockets;
    
    NEWERA_API FPaperSpriteSocketMap();
};

