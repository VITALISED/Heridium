#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tkpalettetexture.meta.h"

class cGcCustomisationColourGroup
{
public:
    static const unsigned __int64 muNameHash = 0x7E7DCFD2B65C6AD6;
    static const unsigned __int64 muTemplateHash = 0x4D85AD56BC0E475B;
    static const int miNumMembers = 3;

    TkID<128> mGroupID;
    TkID<256> mTitle;
    cTkPaletteTexture mPalette;

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
