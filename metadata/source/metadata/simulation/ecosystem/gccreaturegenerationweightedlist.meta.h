#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreaturegenerationweightedlistdomainentry.meta.h"

class cGcCreatureGenerationWeightedList
{
public:
    static const unsigned __int64 muNameHash = 0xE51761B21603792C;
    static const unsigned __int64 muTemplateHash = 0x4F1226E9514AC6E8;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcCreatureGenerationWeightedListDomainEntry> maGround;
    cTkDynamicArray<cGcCreatureGenerationWeightedListDomainEntry> maAir;
    cTkDynamicArray<cGcCreatureGenerationWeightedListDomainEntry> maCave;
    cTkDynamicArray<cGcCreatureGenerationWeightedListDomainEntry> maWater;

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
