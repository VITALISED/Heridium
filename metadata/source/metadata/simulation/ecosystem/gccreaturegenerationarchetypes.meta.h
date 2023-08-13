#pragma once
#include "pch.h"

class cGcCreatureGenerationArchetypes
{
public:
    static const unsigned __int64 muNameHash = 0xCFE07CC2C3280EC;
    static const unsigned __int64 muTemplateHash = 0x696350FCE04E777F;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcCreatureGenerationDomainTable1> maGroundArchetypes;
    cTkDynamicArray<cGcCreatureGenerationDomainTable1> maAirArchetypes;
    cTkDynamicArray<cGcCreatureGenerationDomainTable1> maWaterArchetypes;
    cTkDynamicArray<cGcCreatureGenerationDomainTable1> maCaveArchetypes;

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
