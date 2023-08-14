#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationcameradata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationdescriptorgroupoptions.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationtexturegroup.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationcolourgroup.meta.h"
#include "../../../../../metadata/source/metadata/simulation/customisation/gccustomisationbonescales.meta.h"

class cGcCustomisationGroup
{
public:
    static const unsigned __int64 muNameHash = 0xB5A01AE676FD46D;
    static const unsigned __int64 muTemplateHash = 0x867D5B3F13938F63;
    static const int miNumMembers = 9;

    TkID<128> mGroupID;
    TkID<256> mGroupTitle;
    bool mbIsBannerGroup;
    bool mbForceShowAllColourOptions;
    cGcCustomisationCameraData mCameraData;
    cTkDynamicArray<cGcCustomisationDescriptorGroupOptions> maDescriptorOptions;
    cTkDynamicArray<cGcCustomisationTextureGroup> maTextureGroups;
    cTkDynamicArray<cGcCustomisationColourGroup> maColourGroups;
    cTkDynamicArray<cGcCustomisationBoneScales> maBoneScales;

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
