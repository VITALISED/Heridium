#pragma once
#include "pch.h"

class cGcBiomeList;
class cGcBiomeList;

class cGcBiomeListPerStarType
{
public:
    static const unsigned __int64 muNameHash = 0xFABB438AC71DAB8D;
    static const unsigned __int64 muTemplateHash = 0xDB25A53E0EB949F6;
    static const int miNumMembers = 6;

    cTkFixedArray<cGcBiomeList, 4> maStarType;
    cGcBiomeList mLushYellow;
    cGcBiomeList mAbandonedYellow;
    cTkFixedArray<float, 4> maLifeChance;
    cTkFixedArray<float, 4> maAbandonedLifeChance;
    float mfConvertDeadToWeird;

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
