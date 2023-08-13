#pragma once
#include "pch.h"

enum eDifficultySetting
{
    EDifficultySetting_SettingsLocked = 0,
    EDifficultySetting_InventoriesAlwaysInRange = 1,
    EDifficultySetting_AllSlotsUnlocked = 2,
    EDifficultySetting_WarpDriveRequirements = 3,
    EDifficultySetting_CraftingIsFree = 4,
    EDifficultySetting_TutorialEnabled = 5,
    EDifficultySetting_StartWithAllItemsKnown = 6,
    EDifficultySetting_BaseAutoPower = 7,
    EDifficultySetting_DeathConsequences = 8,
    EDifficultySetting_DamageReceived = 9,
    EDifficultySetting_DamageGiven = 10,
    EDifficultySetting_ActiveSurvivalBars = 11,
    EDifficultySetting_HazardDrain = 12,
    EDifficultySetting_EnergyDrain = 13,
    EDifficultySetting_SubstanceCollection = 14,
    EDifficultySetting_InventoryStackLimits = 15,
    EDifficultySetting_ChargingRequirements = 16,
    EDifficultySetting_FuelUse = 17,
    EDifficultySetting_LaunchFuelCost = 18,
    EDifficultySetting_CurrencyCost = 19,
    EDifficultySetting_ScannerRecharge = 20,
    EDifficultySetting_ReputationGain = 21,
    EDifficultySetting_CreatureHostility = 22,
    EDifficultySetting_SpaceCombat = 23,
    EDifficultySetting_GroundCombat = 24,
    EDifficultySetting_ItemShopAvailablity = 25,
    EDifficultySetting_SprintingCost = 26,
    EDifficultySetting_BreakTechOnDamage = 27,
};

class cGcDifficultySettingEnum
{
public:
    static const unsigned __int64 muNameHash = 0x42FEEB238F6504DE;
    static const unsigned __int64 muTemplateHash = 0x3697C286B1CD1B33;
    static const int miNumMembers = 1;

    eDifficultySetting meDifficultySetting;

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
