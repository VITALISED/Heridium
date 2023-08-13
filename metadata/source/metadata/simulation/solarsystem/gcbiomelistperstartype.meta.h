#pragma once

#include "../../../../../../../pch.h"
class cGcBiomeList;
class cGcBiomeList;

class cGcBiomeListPerStarType
{
    static const unsigned __int64 muNameHash = 18067108593452034957;
    static const unsigned __int64 muTemplateHash = 15791209354398091766;
    static const int miNumMembers = 6;

    cTkFixedArray<cGcBiomeList> maStarType;
    cGcBiomeList mLushYellow;
    cGcBiomeList mAbandonedYellow;
    cTkFixedArray<float> maLifeChance;
    cTkFixedArray<float> maAbandonedLifeChance;
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
