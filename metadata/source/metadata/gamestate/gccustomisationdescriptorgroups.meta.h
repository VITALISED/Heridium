#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/customisation/gccustomisationdescriptorgroup.meta.h"

class cGcCustomisationDescriptorGroups
{
public:
    static const unsigned __int64 muNameHash = 0xB84E1949AA2825A6;
    static const unsigned __int64 muTemplateHash = 0x694EA2A8ACF29BCB;
    static const int miNumMembers = 1;

    cTkDynamicArray<cGcCustomisationDescriptorGroup> maDescriptorGroups;

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
