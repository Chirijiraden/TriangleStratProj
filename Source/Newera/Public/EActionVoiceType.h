#pragma once
#include "CoreMinimal.h"
#include "EActionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EActionVoiceType : uint8 {
    INVALID,
    V_M_SEL,
    V_M_RLN,
    V_M_RLN_MASK,
    V_M_BND,
    V_F_FRE,
    V_F_YRA,
    V_F_ANA,
    V_F_HEW,
    V_M_ELA,
    V_M_RDL,
    V_M_COR,
    V_M_JUL,
    V_F_MIR,
    V_F_CRD,
    V_M_TRA,
    V_F_TRI,
    V_F_ABR,
    V_F_HOS,
    V_M_NAR,
    V_F_MED,
    V_M_YEN,
    V_M_MAX UMETA(Hidden),
    V_M_ARC,
    V_M_FLA,
    V_F_EZA,
    V_M_LIO,
    V_F_GUR,
    V_F_PIC,
    V_N_DEC,
    V_M_KOH,
    V_F_GIB,
    V_M_MAX_G,
    V_F_ABR_E,
    V_M_PTR_E,
    V_M_SMN_G,
    V_M_SLV_E,
    V_M_ROF_G,
    V_M_LND_E,
    V_M_JRM_G,
    V_M_GST_E,
    V_F_ERK_E,
    V_M_TRS_E,
    V_M_SVR_G,
    V_M_DRG_G,
    V_M_SEC_G,
    V_F_POP_E,
    V_M_SLS_E,
    V_M_BKR_G,
    V_M_EGS_G,
    V_M_KNS_E,
    V_M_IDO_E,
    V_M_IDO2_E,
    V_F_LYL_E,
    V_M_CLR_E,
    V_M_MB101_E,
    V_M_MB103_E,
    V_M_ENE001,
    V_M_ENE002,
    V_M_ENE003,
    V_M_ENE004,
    V_M_ENE005,
    V_M_ENE006,
    V_M_ENE007,
    V_M_ENE008,
    V_M_ENE009,
    V_M_ENE010,
};
