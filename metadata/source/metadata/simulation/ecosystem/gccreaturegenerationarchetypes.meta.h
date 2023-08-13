#pragma once

#include "../../../../../../../pch.h"
class cGcCreatureGenerationArchetypes
{
    static const unsigned __int64 muNameHash = 936194346035871980;
    static const unsigned __int64 muTemplateHash = 7594002443702007679;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
