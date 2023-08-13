#pragma once

#include "../../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 13145881282388758674;
    static const unsigned __int64 muTemplateHash = 11383624274187075434;
    static const int miNumMembers = 2;

    eNumColours meNumColours;
    cTkFixedArray<cTkColour> maColours;

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
