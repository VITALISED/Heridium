#pragma once

#include "../../../../../../pch.h"
enum eWonderMineralCategory
{
    EWonderMineralCategory_GeneralFact0 = 0,
    EWonderMineralCategory_GeneralFact1 = 1,
    EWonderMineralCategory_GeneralFact2 = 2,
    EWonderMineralCategory_MetalFact = 3,
    EWonderMineralCategory_ColdFact = 4,
    EWonderMineralCategory_HotFact = 5,
    EWonderMineralCategory_RadFact = 6,
    EWonderMineralCategory_ToxFact = 7,
};

class cGcWonderMineralCategory
{
    static const unsigned __int64 muNameHash = 11203593955890452626;
    static const unsigned __int64 muTemplateHash = 13500405273256805351;
    static const int miNumMembers = 1;

    eWonderMineralCategory meWonderMineralCategory;

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
