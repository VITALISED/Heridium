#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/graphics/2d/gcpalettedata.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gccustomisationcolourpaletteextradata.meta.h"

class cGcCustomisationColourPalettes
{
public:
    static const unsigned __int64 muNameHash = 0x8D353F7BD3E655C5;
    static const unsigned __int64 muTemplateHash = 0xEBEFF3A4D2A4DE2B;
    static const int miNumMembers = 2;

    cTkFixedArray<cGcPaletteData, 23> maColourPalettes;
    cTkFixedArray<cGcCustomisationColourPaletteExtraData, 23> maExtraData;

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
