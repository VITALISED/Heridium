#pragma once
#include "pch.h"

class cGcCustomisationCameraData;

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
    cTkDynamicArray<cGcCustomisationDescriptorGroupOptions1> maDescriptorOptions;
    cTkDynamicArray<cGcCustomisationTextureGroup1> maTextureGroups;
    cTkDynamicArray<cGcCustomisationColourGroup1> maColourGroups;
    cTkDynamicArray<cGcCustomisationBoneScales1> maBoneScales;

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
