#pragma once
#include "../../../../../../pch.h"

class cGcDeathConsequencesDifficultyOption;
class cGcDamageReceivedDifficultyOption;
class cGcDamageGivenDifficultyOption;
class cGcActiveSurvivalBarsDifficultyOption;
class cGcHazardDrainDifficultyOption;
class cGcEnergyDrainDifficultyOption;
class cGcSubstanceCollectionDifficultyOption;
class cGcInventoryStackLimitsDifficultyOption;
class cGcChargingRequirementsDifficultyOption;
class cGcFuelUseDifficultyOption;
class cGcLaunchFuelCostDifficultyOption;
class cGcCurrencyCostDifficultyOption;
class cGcItemShopAvailabilityDifficultyOption;
class cGcScannerRechargeDifficultyOption;
class cGcReputationGainDifficultyOption;
class cGcCreatureHostilityDifficultyOption;
class cGcCombatTimerDifficultyOption;
class cGcCombatTimerDifficultyOption;
class cGcSprintingCostDifficultyOption;
class cGcBreakTechOnDamageDifficultyOption;

class cGcDifficultySettingsData
{
    static const unsigned __int64 muNameHash = 0x640D4FDC2A95A771;
    static const unsigned __int64 muTemplateHash = 0x26F84C6D1073784E;
    static const int miNumMembers = 28;

    bool mbSettingsLocked;
    bool mbInventoriesAlwaysInRange;
    bool mbAllSlotsUnlocked;
    bool mbWarpDriveRequirements;
    bool mbCraftingIsFree;
    bool mbTutorialEnabled;
    bool mbStartWithAllItemsKnown;
    bool mbBaseAutoPower;
    cGcDeathConsequencesDifficultyOption mDeathConsequences;
    cGcDamageReceivedDifficultyOption mDamageReceived;
    cGcDamageGivenDifficultyOption mDamageGiven;
    cGcActiveSurvivalBarsDifficultyOption mActiveSurvivalBars;
    cGcHazardDrainDifficultyOption mHazardDrain;
    cGcEnergyDrainDifficultyOption mEnergyDrain;
    cGcSubstanceCollectionDifficultyOption mSubstanceCollection;
    cGcInventoryStackLimitsDifficultyOption mInventoryStackLimits;
    cGcChargingRequirementsDifficultyOption mChargingRequirements;
    cGcFuelUseDifficultyOption mFuelUse;
    cGcLaunchFuelCostDifficultyOption mLaunchFuelCost;
    cGcCurrencyCostDifficultyOption mCurrencyCost;
    cGcItemShopAvailabilityDifficultyOption mItemShopAvailability;
    cGcScannerRechargeDifficultyOption mScannerRecharge;
    cGcReputationGainDifficultyOption mReputationGain;
    cGcCreatureHostilityDifficultyOption mCreatureHostility;
    cGcCombatTimerDifficultyOption mSpaceCombatTimers;
    cGcCombatTimerDifficultyOption mGroundCombatTimers;
    cGcSprintingCostDifficultyOption mSprintingCost;
    cGcBreakTechOnDamageDifficultyOption mBreakTechOnDamage;

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
