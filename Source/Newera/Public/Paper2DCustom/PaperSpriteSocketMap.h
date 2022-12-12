#pragma once
#include "CoreMinimal.h"
#include "PaperSpriteSocket.h"
#include "PaperSpriteSocketMap.generated.h"

USTRUCT(BlueprintType)
struct FPaperSpriteSocketMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FPaperSpriteSocket> Sockets;
    
    PAPER2D_API FPaperSpriteSocketMap();
};

