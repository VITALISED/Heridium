#pragma once
#include "../../../../../pch.h"

enum eNumColours
{
    ENumColours_Inactive = 0,
    ENumColours_1 = 1,
    ENumColours_4 = 2,
    ENumColours_8 = 3,
    ENumColours_16 = 4,
    ENumColours_All = 5,
};

class cGcPaletteData
{
public:
    static const unsigned __int64 muNameHash = 0xB66F8D60603D1092;
    static const unsigned __int64 muTemplateHash = 0x9DFAC1F6DF6F3F6A;
    static const int miNumMembers = 2;

    eNumColours meNumColours;
    cTkFixedArray<cTkColour, 64> maColours;

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
