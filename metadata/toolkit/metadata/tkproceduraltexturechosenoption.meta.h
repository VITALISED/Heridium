#pragma once
#include "../../../pch.h"

#include "../../../metadata/toolkit/metadata/tkpalettetexture.meta.h"

class cTkProceduralTextureChosenOption
{
public:
    static const unsigned __int64 muNameHash = 0x4BFAC826445A23F2;
    static const unsigned __int64 muTemplateHash = 0xEF693901D9F148D0;
    static const int miNumMembers = 6;

    TkID<128> mLayer;
    TkID<128> mGroup;
    cTkPaletteTexture mPalette;
    bool mbOverrideColour;
    cTkColour mColour;
    TkID<256> mOptionName;

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
