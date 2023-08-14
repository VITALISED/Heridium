#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreaturegenerationdomaintable.meta.h"

class cGcCreatureGenerationArchetypes
{
public:
    static const unsigned __int64 muNameHash = 0xCFE07CC2C3280EC;
    static const unsigned __int64 muTemplateHash = 0x696350FCE04E777F;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcCreatureGenerationDomainTable> maGroundArchetypes;
    cTkDynamicArray<cGcCreatureGenerationDomainTable> maAirArchetypes;
    cTkDynamicArray<cGcCreatureGenerationDomainTable> maWaterArchetypes;
    cTkDynamicArray<cGcCreatureGenerationDomainTable> maCaveArchetypes;

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
