#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionproductenum.meta.h"

class cGcCostProduct
{
public:
    static const unsigned __int64 muNameHash = 0xE90BC34FB3DEA4D7;
    static const unsigned __int64 muTemplateHash = 0x2748250647D75225;
    static const int miNumMembers = 3;

    cGcDefaultMissionProductEnum mDefault;
    TkID<128> mId;
    int miAmount;

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
