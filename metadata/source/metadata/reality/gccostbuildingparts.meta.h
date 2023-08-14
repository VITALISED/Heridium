#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcbuildingcostpartcount.meta.h"

class cGcCostBuildingParts
{
public:
    static const unsigned __int64 muNameHash = 0x61447A1079C43833;
    static const unsigned __int64 muTemplateHash = 0x96F0AF27135C9BEA;
    static const int miNumMembers = 2;

    TkID<256> mDescription;
    cTkDynamicArray<cGcBuildingCostPartCount> maRequiredParts;

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
