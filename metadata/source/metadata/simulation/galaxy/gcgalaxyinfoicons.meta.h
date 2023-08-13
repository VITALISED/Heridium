#pragma once
#include "../../../../../../../pch.h"

class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;

class cGcGalaxyInfoIcons
{
    static const unsigned __int64 muNameHash = 0x1DE42844C3529A0B;
    static const unsigned __int64 muTemplateHash = 0x7D3DB4E4A1077EA3;
    static const int miNumMembers = 9;

    cTkFixedArray<cTkTextureResource> maRaceIcons;
    cTkFixedArray<cTkTextureResource> maEconomyIcons;
    cTkTextureResource mEconomyTechNotInstalledIcon;
    cTkFixedArray<cTkTextureResource> maWealthIcons;
    cTkFixedArray<cTkTextureResource> maConflictIcons;
    cTkTextureResource mConflictTechNotInstalledIcon;
    cTkTextureResource mWarpIcon;
    cTkTextureResource mWarpErrorIcon;
    cTkTextureResource mWarpTechNotInstalledIcon;

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
