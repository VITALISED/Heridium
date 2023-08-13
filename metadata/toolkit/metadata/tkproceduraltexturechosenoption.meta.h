#pragma once

#include "../../../../../pch.h"
class cTkPaletteTexture;

class cTkProceduralTextureChosenOption
{
    static const unsigned __int64 muNameHash = 5474908363703329778;
    static const unsigned __int64 muTemplateHash = 17251382527733614800;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};