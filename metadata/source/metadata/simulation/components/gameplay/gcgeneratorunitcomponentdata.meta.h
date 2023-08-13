#pragma once
#include "pch.h"

enum eGeneratorUnitType
{
    EGeneratorUnitType_MiningUnit = 0,
    EGeneratorUnitType_GasHarvester = 1,
    EGeneratorUnitType_SystemHoover = 2,
};
class cGcMaintenanceComponentData;

class cGcGeneratorUnitComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xE7D049A3A9D077A8;
    static const unsigned __int64 muTemplateHash = 0xFB38EAEFCC344295;
    static const int miNumMembers = 4;

    eGeneratorUnitType meGeneratorUnitType;
    int miResourceMaintenanceSlotOverride;
    cTkFixedArray<TkID<128>, 16> maBiomeGasRewards;
    cGcMaintenanceComponentData mMaintenanceData;

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
