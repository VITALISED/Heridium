#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/user/gcdeathconsequencesdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcdamagereceiveddifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcdamagegivendifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcactivesurvivalbarsdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gchazarddraindifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcenergydraindifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcsubstancecollectiondifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcinventorystacklimitsdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcchargingrequirementsdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcfuelusedifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gclaunchfuelcostdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gccurrencycostdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcitemshopavailabilitydifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcscannerrechargedifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcreputationgaindifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gccreaturehostilitydifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gccombattimerdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcsprintingcostdifficultyoption.meta.h"
#include "../../../../metadata/source/metadata/user/gcbreaktechondamagedifficultyoption.meta.h"

class cGcDifficultySettingsData
{
public:
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
