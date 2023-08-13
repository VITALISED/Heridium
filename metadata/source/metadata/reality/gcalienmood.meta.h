#pragma once
#include "pch.h"

enum eMood
{
    EMood_Neutral = 0,
    EMood_Positive = 1,
    EMood_VeryPositive = 2,
    EMood_Negative = 3,
    EMood_VeryNegative = 4,
    EMood_Pity = 5,
    EMood_Sad = 6,
    EMood_Dead = 7,
    EMood_Confused = 8,
};

class cGcAlienMood
{
public:
    static const unsigned __int64 muNameHash = 0x9A637E59AB66BFB0;
    static const unsigned __int64 muTemplateHash = 0x24CC01D94B6A1C1B;
    static const int miNumMembers = 1;

    eMood meMood;

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
