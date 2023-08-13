#pragma once

#include "../../../../../../pch.h"
enum eWonderCustomCategory
{
    EWonderCustomCategory_Custom01 = 0,
    EWonderCustomCategory_Custom02 = 1,
    EWonderCustomCategory_Custom03 = 2,
    EWonderCustomCategory_Custom04 = 3,
    EWonderCustomCategory_Custom05 = 4,
    EWonderCustomCategory_Custom06 = 5,
    EWonderCustomCategory_Custom07 = 6,
    EWonderCustomCategory_Custom08 = 7,
    EWonderCustomCategory_Custom09 = 8,
    EWonderCustomCategory_Custom10 = 9,
    EWonderCustomCategory_Custom11 = 10,
    EWonderCustomCategory_Custom12 = 11,
};

class cGcWonderCustomCategory
{
    static const unsigned __int64 muNameHash = 4236405831480899570;
    static const unsigned __int64 muTemplateHash = 12871889282889007328;
    static const int miNumMembers = 1;

    eWonderCustomCategory meWonderCustomCategory;

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
