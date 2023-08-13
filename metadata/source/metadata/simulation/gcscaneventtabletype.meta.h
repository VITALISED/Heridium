#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 237864633744840457;
    static const unsigned __int64 muTemplateHash = 1735487437020299703;
    static const int miNumMembers = 1;

    eScanTable meScanTable;

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
