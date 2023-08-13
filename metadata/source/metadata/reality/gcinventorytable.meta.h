#pragma once

#include "../../../../../../pch.h"
class cGcInventoryLayoutGenerationData;
class cGcInventoryCostData;
class cGcInventoryCostDataEntry;
class cGcInventoryGenerationBaseStatData;
class cGcWeaponInventoryMaxUpgradeCapacity;

class cGcInventoryTable
{
    static const unsigned __int64 muNameHash = 3639523825947150949;
    static const unsigned __int64 muTemplateHash = 11324183089595289473;
    static const int miNumMembers = 12;

    cTkDynamicArray<cGcInventoryTableEntry> maTable;
    cGcInventoryLayoutGenerationData mGenerationData;
    cGcInventoryCostData mShipCostData;
    cTkFixedArray<cGcInventoryCostDataEntry> maWeaponCostData;
    cGcInventoryCostDataEntry mVehicleCostData;
    cTkFixedArray<cGcInventoryClassProbabilities> maClassProbabilityData;
    cGcInventoryGenerationBaseStatData mVehicleBaseStatsData;
    cTkFixedArray<cGcInventoryGenerationBaseStatData> maShipBaseStatsData;
    cTkFixedArray<cGcInventoryGenerationBaseStatData> maWeaponBaseStatsData;
    cTkDynamicArray<cGcInventoryBaseStat> maBaseStats;
    cTkFixedArray<cGcShipInventoryMaxUpgradeCapacity> maShipInventoryMaxUpgradeSize;
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
