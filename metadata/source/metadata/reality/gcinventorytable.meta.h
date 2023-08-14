#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcinventorytableentry.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorylayoutgenerationdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorycostdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorycostdataentry.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventoryclassprobabilities.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorygenerationbasestatdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorybasestat.meta.h"
#include "../../../../metadata/source/metadata/reality/gcshipinventorymaxupgradecapacity.meta.h"
#include "../../../../metadata/source/metadata/reality/gcweaponinventorymaxupgradecapacity.meta.h"

class cGcInventoryTable
{
public:
    static const unsigned __int64 muNameHash = 0x32822FA2FD268A65;
    static const unsigned __int64 muTemplateHash = 0x9D2794859AD00F81;
    static const int miNumMembers = 12;

    cTkDynamicArray<cGcInventoryTableEntry> maTable;
    cGcInventoryLayoutGenerationData mGenerationData;
    cGcInventoryCostData mShipCostData;
    cTkFixedArray<cGcInventoryCostDataEntry, 5> maWeaponCostData;
    cGcInventoryCostDataEntry mVehicleCostData;
    cTkFixedArray<cGcInventoryClassProbabilities, 4> maClassProbabilityData;
    cGcInventoryGenerationBaseStatData mVehicleBaseStatsData;
    cTkFixedArray<cGcInventoryGenerationBaseStatData, 9> maShipBaseStatsData;
    cTkFixedArray<cGcInventoryGenerationBaseStatData, 5> maWeaponBaseStatsData;
    cTkDynamicArray<cGcInventoryBaseStat> maBaseStats;
    cTkFixedArray<cGcShipInventoryMaxUpgradeCapacity, 9> maShipInventoryMaxUpgradeSize;
    cGcWeaponInventoryMaxUpgradeCapacity mWeaponInventoryMaxUpgradeSize;

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
