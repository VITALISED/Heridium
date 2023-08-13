#pragma once
#include "../../../../../../../../pch.h"

class cTkBlackboardDefaultValueInteger;
class cTkBlackboardComparisonTypeEnum;

class cGcBlackboardIntCompareDecoratorData
{
    static const unsigned __int64 muNameHash = 0xE8C35E70B4AA8A05;
    static const unsigned __int64 muTemplateHash = 0xB21B60117023F6EC;
    static const int miNumMembers = 5;

    TkID<128> mKey;
    cTkBlackboardDefaultValueInteger mCompareTo;
    cTkBlackboardComparisonTypeEnum mComparison;
    cTkClassPointer mOnTrue;
    cTkClassPointer mOnFalse;

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
