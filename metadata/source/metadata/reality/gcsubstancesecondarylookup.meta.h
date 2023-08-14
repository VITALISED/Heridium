#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcsubstancesecondary.meta.h"

class cGcSubstanceSecondaryLookup
{
public:
    static const unsigned __int64 muNameHash = 0x5AF4540465F27753;
    static const unsigned __int64 muTemplateHash = 0xF6D1A7B47F42D3C7;
    static const int miNumMembers = 2;

    TkID<128> mPrimaryID;
    cTkDynamicArray<cGcSubstanceSecondary> maSecondaryChances;

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
