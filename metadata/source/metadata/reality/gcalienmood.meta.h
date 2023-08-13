#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 11124874428128083888;
    static const unsigned __int64 muTemplateHash = 2651496313399155739;
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
