#pragma once
#include "pch.h"

class cGcDifficultySettingsData;
class cGcDifficultyStartWithAllItemsKnownOptionData;
class cGcDifficultyStartWithAllItemsKnownOptionData;

class cGcDifficultyConfig
{
public:
    static const unsigned __int64 muNameHash = 0xA688E4255C8FED76;
    static const unsigned __int64 muTemplateHash = 0x24D7B6A525FF59C4;
    static const int miNumMembers = 55;

    TkID<256> mPresetLocId;
    cTkFixedArray<TkID<256>, 7> maPresetOptionLocIds;
    cTkFixedArray<cGcDifficultySettingsData, 7> maPresets;
    cGcDifficultySettingsData mPermadeathMinSettings;
    cTkFixedArray<cGcDifficultyOptionUIGroup, 4> maUILayout;
    cTkFixedArray<cGcDifficultySettingCommonData, 28> maCommonSettingsData;
    int miAllSlotsUnlockedStartingSuitSlots;
    int miAllSlotsUnlockedStartingSuitTechSlots;
    int miAllSlotsUnlockedStartingWeaponSlots;
    int miAllSlotsUnlockedStartingShipSlots;
    int miAllSlotsUnlockedStartingShipTechSlots;
    cGcDifficultyStartWithAllItemsKnownOptionData mStartWithAllItemsKnownDisabledData;
    cGcDifficultyStartWithAllItemsKnownOptionData mStartWithAllItemsKnownEnabledData;
    cTkFixedArray<TkID<256>, 3> maCreatureHostilityOptionLocIds;
    cTkFixedArray<TkID<256>, 4> maDeathConsequencesOptionLocIds;
    cTkFixedArray<TkID<256>, 4> maDamageReceivedOptionLocIds;
    cTkFixedArray<float, 4> maDamageReceivedMultipliers;
    cTkFixedArray<int, 4> maDamageReceivedAIMechTechDamageHits;
    cTkFixedArray<TkID<256>, 3> maDamageGivenOptionLocIds;
    cTkFixedArray<float, 3> maDamageGivenMultipliers;
    cTkFixedArray<TkID<256>, 4> maActiveSurvivalBarsOptionLocIds;
    cTkFixedArray<TkID<256>, 3> maHazardDrainOptionLocIds;
    cTkFixedArray<float, 3> maHazardDrainMultipliers;
    cTkFixedArray<TkID<256>, 3> maEnergyDrainOptionLocIds;
    cTkFixedArray<float, 3> maEnergyDrainMultipliers;
    cTkFixedArray<TkID<256>, 3> maSubstanceCollectionOptionLocIds;
    cTkFixedArray<float, 3> maSubstanceCollectionMultipliers;
    cTkFixedArray<int, 3> maSubstanceCollectionLaserAmount;
    cTkFixedArray<TkID<256>, 3> maInventoryStackLimitsOptionLocIds;
    cTkFixedArray<cGcDifficultyInventoryStackSizeOptionData, 3> maInventoryStackLimitsOptionData;
    cTkFixedArray<TkID<256>, 4> maChargingRequirementsOptionLocIds;
    cTkFixedArray<float, 4> maChargingRequirementsMultipliers;
    cTkFixedArray<TkID<256>, 4> maFuelUseOptionLocIds;
    cTkFixedArray<cGcDifficultyFuelUseOptionData, 4> maFuelUseOptionData;
    cTkFixedArray<TkID<256>, 4> maLaunchFuelCostOptionLocIds;
    cTkFixedArray<float, 4> maLaunchFuelCostMultipliers;
    cTkFixedArray<float, 4> maShipSummoningFuelCostMultipliers;
    cTkFixedArray<TkID<256>, 4> maCurrencyCostOptionLocIds;
    cTkFixedArray<cGcDifficultyCurrencyCostOptionData, 4> maCurrencyCostOptionData;
    cTkFixedArray<TkID<256>, 3> maItemShopAvailabilityOptionLocIds;
    cTkFixedArray<cGcItemShopAvailabilityDifficultyOptionData, 3> maItemShopAvailabilityOptionData;
    cTkFixedArray<TkID<256>, 4> maScannerRechargeOptionLocIds;
    cTkFixedArray<float, 4> maScannerRechargeMultipliers;
    cTkFixedArray<TkID<256>, 4> maReputationGainOptionLocIds;
    cTkFixedArray<float, 4> maReputationGainMultipliers;
    cTkFixedArray<TkID<256>, 4> maSpaceCombatOptionLocIds;
    cTkFixedArray<float, 4> maSpaceCombatMultipliers;
    cTkFixedArray<float, 4> maSpaceCombatDifficultyMultipliers;
    cTkFixedArray<TkID<256>, 4> maGroundCombatOptionLocIds;
    cTkFixedArray<float, 4> maGroundCombatMultipliers;
    cTkFixedArray<float, 4> maSentinelTimeOutMultipliers;
    cTkFixedArray<TkID<256>, 3> maSprintingOptionLocIds;
    cTkFixedArray<float, 3> maSprintingCostMultipliers;
    cTkFixedArray<TkID<256>, 3> maBreakTechOnDamageOptionLocIds;
    cTkFixedArray<float, 3> maBreakTechOnDamageMultipliers;

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
