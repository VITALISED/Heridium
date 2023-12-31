#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationdescriptorgroupoption.meta.h"

class cGcCustomisationDescriptorGroupOptions
{
public:
    static const unsigned __int64 muNameHash = 0x57CBFDF164E923E9;
    static const unsigned __int64 muTemplateHash = 0x3E6EE8A3313E1086;
    static const int miNumMembers = 4;

    TkID<256> mGroupTitle;
    bool mbFirstOptionIsEmpty;
    cTkDynamicArray<cGcCustomisationDescriptorGroupOption> maDescriptorGroupOptions;
    cTkDynamicArray<TkID<128> > maPrerequisiteGroup;

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
