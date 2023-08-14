#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gcpetaccessoryinfo.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/gcpetaccessorygroup.meta.h"

class cGcPetAccessoryTable
{
public:
    static const unsigned __int64 muNameHash = 0x9ED3D0A38623AF53;
    static const unsigned __int64 muTemplateHash = 0x74F47B52F687DFAA;
    static const int miNumMembers = 2;

    cTkFixedArray<cGcPetAccessoryInfo, 27> maAccessories;
    cTkDynamicArray<cGcPetAccessoryGroup> maAccessoryGroups;

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
