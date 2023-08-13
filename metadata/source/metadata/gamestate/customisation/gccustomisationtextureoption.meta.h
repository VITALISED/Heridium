#pragma once

#include "../../../../../../../pch.h"
class cTkPaletteTexture;

class cGcCustomisationTextureOption
{
    static const unsigned __int64 muNameHash = 14823506282963132163;
    static const unsigned __int64 muTemplateHash = 17466021724632960495;
    static const int miNumMembers = 6;

    TkID<128> mTextureOptionsID;
    TkID<128> mLayer;
    TkID<128> mGroup;
    cTkPaletteTexture mPalette;
    cTkDynamicArray<TkID<256> > maOptions;
    cTkDynamicArray<TkID<256> > maTips;

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
