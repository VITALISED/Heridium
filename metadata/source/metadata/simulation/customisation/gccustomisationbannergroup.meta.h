#pragma once
#include "../../../../../../../pch.h"

class cGcPaletteData;
class cGcCustomisationColourPaletteExtraData;
class cGcPaletteData;
class cGcCustomisationColourPaletteExtraData;

class cGcCustomisationBannerGroup
{
    static const unsigned __int64 muNameHash = 0xD679E7C47BC9313C;
    static const unsigned __int64 muTemplateHash = 0xA9D290FD12C9A030;
    static const int miNumMembers = 5;

    cTkDynamicArray<cGcCustomisationBannerImageData> maBannerImages;
    cGcPaletteData mMainColours;
    cGcCustomisationColourPaletteExtraData mMainColoursExtraData;
    cGcPaletteData mBackgroundColours;
    cGcCustomisationColourPaletteExtraData mBackgroundColoursExtraData;

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
