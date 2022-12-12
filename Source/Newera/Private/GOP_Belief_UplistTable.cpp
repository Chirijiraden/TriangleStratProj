#include "GOP_Belief_UplistTable.h"

FGOP_Belief_UplistTable::FGOP_Belief_UplistTable() {
    this->Type = EBeriefPointType::IMMEDIATE;
    this->FaithType = EFaithType::NONE;
    this->Step1Threshold = 0;
    this->Step1UpValue = 0;
    this->Step2Threshold = 0;
    this->Step2UpValue = 0;
    this->Step3Threshold = 0;
    this->Step3UpValue = 0;
    this->Step4Threshold = 0;
    this->Step4UpValue = 0;
    this->Step5Threshold = 0;
    this->Step5UpValue = 0;
    this->FaithType02 = EFaithType::NONE;
    this->Step1Threshold02 = 0;
    this->Step1UpValue02 = 0;
    this->FaithType03 = EFaithType::NONE;
    this->Step1Threshold03 = 0;
    this->Step1UpValue03 = 0;
    this->BalanceProduction = false;
}

