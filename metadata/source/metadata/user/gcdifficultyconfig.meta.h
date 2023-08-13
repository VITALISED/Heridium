#pragma once

#include "../../../../../../pch.h"
class cGcDifficultySettingsData;
class cGcDifficultyStartWithAllItemsKnownOptionData;
class cGcDifficultyStartWithAllItemsKnownOptionData;

class cGcDifficultyConfig
{
    static const unsigned __int64 muNameHash = 12000092056246545782;
    static const unsigned __int64 muTemplateHash = 2654791325781547460;
    static const int miNumMembers = 55;

    TkID<256> mPresetLocId;
    cTkFixedArray<TkID<256> > maPresetOptionLocIds;
    cTkFixedArray<cGcDifficultySettingsData> maPresets;
    cGcDifficultySettingsData mPermadeathMinSettings;
    cTkFixedArray<cGcDifficultyOptionUIGroup> maUILayout;
    cTkFixedArray<cGcDifficultySettingCommonData> maCommonSettingsData;
    int miAllSlotsUnlockedStartingSuitSlots;
    int miAllSlotsUnlockedStartingSuitTechSlots;
    int miAllSlotsUnlockedStartingWeaponSlots;
    int miAllSlotsUnlockedStartingShipSlots;
    int miAllSlotsUnlockedStartingShipTechSlots;
    cGcDifficultyStartWithAllItemsKnownOptionData mStartWithAllItemsKnownDisabledData;
    cGcDifficultyStartWithAllItemsKnownOptionData mStartWithAllItemsKnownEnabledData;
    cTkFixedArray<TkID<256> > maCreatureHostilityOptionLocIds;
    cTkFixedArray<TkID<256> > maDeathConsequencesOptionLocIds;
    cTkFixedArray<TkID<256> > maDamageReceivedOptionLocIds;
    cTkFixedArray<float> maDamageReceivedMultipliers;
    cTkFixedArray<int> maDamageReceivedAIMechTechDamageHits;
    cTkFixedArray<TkID<256> > maDamageGivenOptionLocIds;
    cTkFixedArray<float> maDamageGivenMultipliers;
    cTkFixedArray<TkID<256> > maActiveSurvivalBarsOptionLocIds;
    cTkFixedArray<TkID<256> > maHazardDrainOptionLocIds;
    cTkFixedArray<float> maHazardDrainMultipliers;
    cTkFixedArray<TkID<256> > maEnergyDrainOptionLocIds;
    cTkFixedArray<float> maEnergyDrainMultipliers;
    cTkFixedArray<TkID<256> > maSubstanceCollectionOptionLocIds;
    cTkFixedArray<float> maSubstanceCollectionMultipliers;
    cTkFixedArray<int> maSubstanceCollectionLaserAmount;
    cTkFixedArray<TkID<256> > maInventoryStackLimitsOptionLocIds;
    cTkFixedArray<cGcDifficultyInventoryStackSizeOptionData> maInventoryStackLimitsOptionData;
    cTkFixedArray<TkID<256> > maChargingRequirementsOptionLocIds;
    cTkFixedArray<float> maChargingRequirementsMultipliers;
    cTkFixedArray<TkID<256> > maFuelUseOptionLocIds;
    cTkFixedArray<cGcDifficultyFuelUseOptionData> maFuelUseOptionData;
    cTkFixedArray<TkID<256> > maLaunchFuelCostOptionLocIds;
    cTkFixedArray<float> maLaunchFuelCostMultipliers;
    cTkFixedArray<float> maShipSummoningFuelCostMultipliers;
    cTkFixedArray<TkID<256> > maCurrencyCostOptionLocIds;
    cTkFixedArray<cGcDifficultyCurrencyCostOptionData> maCurrencyCostOptionData;
    cTkFixedArray<TkID<256> > maItemShopAvailabilityOptionLocIds;
    cTkFixedArray<cGcItemShopAvailabilityDifficultyOptionData> maItemShopAvailabilityOptionData;
    cTkFixedArray<TkID<256> > maScannerRechargeOptionLocIds;
    cTkFixedArray<float> maScannerRechargeMultipliers;
    cTkFixedArray<TkID<256> > maReputationGainOptionLocIds;
    cTkFixedArray<float> maReputationGainMultipliers;
    cTkFixedArray<TkID<256> > maSpaceCombatOptionLocIds;
    cTkFixedArray<float> maSpaceCombatMultipliers;
    cTkFixedArray<float> maSpaceCombatDifficultyMultipliers;
    cTkFixedArray<TkID<256> > maGroundCombatOptionLocIds;
    cTkFixedArray<float> maGroundCombatMultipliers;
    cTkFixedArray<float> maSentinelTimeOutMultipliers;
    cTkFixedArray<TkID<256> > maSprintingOptionLocIds;
    cTkFixedArray<float> maSprintingCostMultipliers;
    cTkFixedArray<TkID<256> > maBreakTechOnDamageOptionLocIds;
    cTkFixedArray<float> maBreakTechOnDamageMultipliers;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
