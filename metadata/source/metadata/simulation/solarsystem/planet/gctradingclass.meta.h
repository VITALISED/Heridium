#pragma once
#include "../../../../../../pch.h"

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
public:
    static const unsigned __int64 muNameHash = 0x9E3AE80CF84700A6;
    static const unsigned __int64 muTemplateHash = 0x9BB54B9C170BF01C;
    static const int miNumMembers = 1;

    eTradingClass meTradingClass;

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
