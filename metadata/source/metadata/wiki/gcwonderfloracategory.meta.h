#pragma once

#include "../../../../../../pch.h"
enum eWonderFloraCategory
{
    EWonderFloraCategory_GeneralFact0 = 0,
    EWonderFloraCategory_GeneralFact1 = 1,
    EWonderFloraCategory_GeneralFact2 = 2,
    EWonderFloraCategory_GeneralFact3 = 3,
    EWonderFloraCategory_ColdFact = 4,
    EWonderFloraCategory_HotFact = 5,
    EWonderFloraCategory_RadFact = 6,
    EWonderFloraCategory_ToxFact = 7,
};

class cGcWonderFloraCategory
{
    static const unsigned __int64 muNameHash = 408802726820971228;
    static const unsigned __int64 muTemplateHash = 6893856383778060453;
    static const int miNumMembers = 1;

    eWonderFloraCategory meWonderFloraCategory;

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
