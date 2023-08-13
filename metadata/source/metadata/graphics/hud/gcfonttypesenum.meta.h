#pragma once

#include "../../../../../../../pch.h"
enum eFont
{
    EFont_Impact = 0,
    EFont_Bebas = 1,
    EFont_GeosansLightWide = 2,
    EFont_GeosansLight = 3,
    EFont_GeosansLightMedium = 4,
    EFont_GeosansLightSmall = 5,
    EFont_Segoeuib = 6,
    EFont_Segoeui32 = 7,
};

class cGcFontTypesEnum
{
    static const unsigned __int64 muNameHash = 15957828535691821574;
    static const unsigned __int64 muTemplateHash = 3631764269170746775;
    static const int miNumMembers = 1;

    eFont meFont;

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
