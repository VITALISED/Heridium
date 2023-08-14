#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasebuildingentrycosts.meta.h"

class cGcBaseBuildingCostsTable
{
public:
    static const unsigned __int64 muNameHash = 0xEE25A96466342A98;
    static const unsigned __int64 muTemplateHash = 0x9533C3CCA56FDC13;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcBaseBuildingEntryCosts> maObjectCosts;

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
