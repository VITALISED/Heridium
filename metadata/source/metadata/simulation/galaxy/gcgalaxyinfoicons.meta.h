#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcGalaxyInfoIcons
{
public:
    static const unsigned __int64 muNameHash = 0x1DE42844C3529A0B;
    static const unsigned __int64 muTemplateHash = 0x7D3DB4E4A1077EA3;
    static const int miNumMembers = 9;

    cTkFixedArray<cTkTextureResource, 8> maRaceIcons;
    cTkFixedArray<cTkTextureResource, 7> maEconomyIcons;
    cTkTextureResource mEconomyTechNotInstalledIcon;
    cTkFixedArray<cTkTextureResource, 4> maWealthIcons;
    cTkFixedArray<cTkTextureResource, 4> maConflictIcons;
    cTkTextureResource mConflictTechNotInstalledIcon;
    cTkTextureResource mWarpIcon;
    cTkTextureResource mWarpErrorIcon;
    cTkTextureResource mWarpTechNotInstalledIcon;

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
