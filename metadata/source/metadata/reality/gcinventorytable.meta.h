#pragma once
#include "pch.h"

class cGcInventoryLayoutGenerationData;
class cGcInventoryCostData;
class cGcInventoryCostDataEntry;
class cGcInventoryGenerationBaseStatData;
class cGcWeaponInventoryMaxUpgradeCapacity;

class cGcInventoryTable
{
public:
    static const unsigned __int64 muNameHash = 0x32822FA2FD268A65;
    static const unsigned __int64 muTemplateHash = 0x9D2794859AD00F81;
    static const int miNumMembers = 12;

    cTkDynamicArray<cGcInventoryTableEntry1> maTable;
    cGcInventoryLayoutGenerationData mGenerationData;
    cGcInventoryCostData mShipCostData;
    cTkFixedArray<cGcInventoryCostDataEntry, 5> maWeaponCostData;
    cGcInventoryCostDataEntry mVehicleCostData;
    cTkFixedArray<cGcInventoryClassProbabilities, 4> maClassProbabilityData;
    cGcInventoryGenerationBaseStatData mVehicleBaseStatsData;
    cTkFixedArray<cGcInventoryGenerationBaseStatData, 9> maShipBaseStatsData;
    cTkFixedArray<cGcInventoryGenerationBaseStatData, 5> maWeaponBaseStatsData;
    cTkDynamicArray<cGcInventoryBaseStat1> maBaseStats;
    cTkFixedArray<cGcShipInventoryMaxUpgradeCapacity, 9> maShipInventoryMaxUpgradeSize;
    cGcWeaponInventoryMaxUpgradeCapacity mWeaponInventoryMaxUpgradeSize;

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
