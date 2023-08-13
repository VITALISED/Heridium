#pragma once

#include "../../../../../../pch.h"
enum eTypeOfCost
{
    ETypeOfCost_Currency = 0,
    ETypeOfCost_Substance = 1,
    ETypeOfCost_Product = 2,
};
class cGcCurrency;

class cGcUnlockableTreeCostType
{
    static const unsigned __int64 muNameHash = 8083815208008484912;
    static const unsigned __int64 muTemplateHash = 3871377287695930160;
    static const int miNumMembers = 5;

    TkID<128> mCostTypeID;
    eTypeOfCost meTypeOfCost;
    cGcCurrency mCurrencyType;
    TkID<128> mTypeID;
    TkID<256> mCantAffordString;

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
