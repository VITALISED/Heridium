#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/simulation/tkblackboardcategory.meta.h"

class cTkBlackboardDefaultValueId
{
public:
    static const unsigned __int64 muNameHash = 0x51BC6BBE6D56FC99;
    static const unsigned __int64 muTemplateHash = 0x8120304A040520DE;
    static const int miNumMembers = 3;

    cTkBlackboardCategory mBlackboardCategory;
    TkID<128> mBlackboardKey;
    TkID<128> mDefaultValue;

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
