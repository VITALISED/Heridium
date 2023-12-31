#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/graphics/hud/gchudcomponent.meta.h"
#include "../../../../../metadata/source/metadata/graphics/hud/gctextpreset.meta.h"

class cGcHUDTextData
{
public:
    static const unsigned __int64 muNameHash = 0x88CFB7D1D223D0C5;
    static const unsigned __int64 muTemplateHash = 0x8EF3CBDD0A950DED;
    static const int miNumMembers = 3;

    cGcHUDComponent mData;
    cTkFixedString<128,char> macText;
    cGcTextPreset mPreset;

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
