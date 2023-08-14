#pragma once
#include "../../../../pch.h"

enum eScanTable
{
    EScanTable_Space = 0,
    EScanTable_Planet  = 1,
    EScanTable_Missions = 2,
    EScanTable_Tutorial = 3,
    EScanTable_MissionsCreative = 4,
    EScanTable_Vehicle = 5,
    EScanTable_NPCPlanetSite = 6,
    EScanTable_Seasonal = 7,
};

class cGcScanEventTableType
{
public:
    static const unsigned __int64 muNameHash = 0x34D109FC6FD5709;
    static const unsigned __int64 muTemplateHash = 0x1815B0A103BF81B7;
    static const int miNumMembers = 1;

    eScanTable meScanTable;

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
