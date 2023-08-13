#pragma once

#include "../../../../../../../../pch.h"
enum eTradingClass
{
    ETradingClass_Mining = 0,
    ETradingClass_HighTech = 1,
    ETradingClass_Trading = 2,
    ETradingClass_Manufacturing = 3,
    ETradingClass_Fusion = 4,
    ETradingClass_Scientific = 5,
    ETradingClass_PowerGeneration = 6,
};

class cGcTradingClass
{
    static const unsigned __int64 muNameHash = 11401680549044486310;
    static const unsigned __int64 muTemplateHash = 11219957180437098524;
    static const int miNumMembers = 1;

    eTradingClass meTradingClass;

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
