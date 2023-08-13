#pragma once
#include "pch.h"

enum eTradeCategory
{
    ETradeCategory_Mineral = 0,
    ETradeCategory_Tech = 1,
    ETradeCategory_Commodity = 2,
    ETradeCategory_Component = 3,
    ETradeCategory_Alloy = 4,
    ETradeCategory_Exotic = 5,
    ETradeCategory_Energy = 6,
    ETradeCategory_None = 7,
    ETradeCategory_SpecialShop = 8,
};

class cGcTradeCategory
{
public:
    static const unsigned __int64 muNameHash = 0xABEDBCE191703616;
    static const unsigned __int64 muTemplateHash = 0xFA160E0C402E2DCA;
    static const int miNumMembers = 1;

    eTradeCategory meTradeCategory;

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
