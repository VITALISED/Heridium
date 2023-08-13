#pragma once
#include "../../../../../../pch.h"

enum eWonderCreatureCategory
{
    EWonderCreatureCategory_HerbivoreSizeMax = 0,
    EWonderCreatureCategory_HerbivoreSizeMin = 1,
    EWonderCreatureCategory_CarnivoreSizeMax = 2,
    EWonderCreatureCategory_CarnivoreSizeMin = 3,
    EWonderCreatureCategory_IntelligenceMax = 4,
    EWonderCreatureCategory_ViciousnessMax = 5,
    EWonderCreatureCategory_Hot = 6,
    EWonderCreatureCategory_Cold = 7,
    EWonderCreatureCategory_Tox = 8,
    EWonderCreatureCategory_Rad = 9,
    EWonderCreatureCategory_Weird = 10,
    EWonderCreatureCategory_Water = 11,
    EWonderCreatureCategory_Robot = 12,
    EWonderCreatureCategory_Flyer = 13,
    EWonderCreatureCategory_Cave = 14,
};

class cGcWonderCreatureCategory
{
    static const unsigned __int64 muNameHash = 0x11682D56DC3AFBF1;
    static const unsigned __int64 muTemplateHash = 0x4C939A1F96BFC9A6;
    static const int miNumMembers = 1;

    eWonderCreatureCategory meWonderCreatureCategory;

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
