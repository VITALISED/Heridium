#pragma once

#include "../../../../../../pch.h"
enum eBreakTechOnDamageProbability
{
    EBreakTechOnDamageProbability_None = 0,
    EBreakTechOnDamageProbability_Low = 1,
    EBreakTechOnDamageProbability_High = 2,
};

class cGcBreakTechOnDamageDifficultyOption
{
    static const unsigned __int64 muNameHash = 1754379857863836334;
    static const unsigned __int64 muTemplateHash = 3207122654370909179;
    static const int miNumMembers = 1;

    eBreakTechOnDamageProbability meBreakTechOnDamageProbability;

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
