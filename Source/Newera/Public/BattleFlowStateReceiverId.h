#pragma once
#include "CoreMinimal.h"
#include "BattleFlowStateReceiverId.generated.h"

USTRUCT(BlueprintType)
struct FBattleFlowStateReceiverId {
    GENERATED_BODY()
public:
    NEWERA_API FBattleFlowStateReceiverId();
};
FORCEINLINE uint32 GetTypeHash(const FBattleFlowStateReceiverId) { return 0; }
