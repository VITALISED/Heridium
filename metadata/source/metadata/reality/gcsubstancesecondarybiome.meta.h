#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcsubstancesecondary.meta.h"

class cGcSubstanceSecondaryBiome
{
public:
    static const unsigned __int64 muNameHash = 0xA95856C785F7F5CB;
    static const unsigned __int64 muTemplateHash = 0x9D54C9A287EAD2CE;
    static const int miNumMembers = 1;

    cTkFixedArray<cGcSubstanceSecondary, 16> maSecondarySubstanceByBiome;

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
