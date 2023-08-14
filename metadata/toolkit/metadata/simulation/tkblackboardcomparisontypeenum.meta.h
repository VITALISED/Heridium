#pragma once
#include "../../../../pch.h"

enum eComparisonType
{
    EComparisonType_Equal = 0,
    EComparisonType_NotEqual = 1,
    EComparisonType_GreaterThan = 2,
    EComparisonType_GreaterThanEqual = 3,
    EComparisonType_LessThan = 4,
    EComparisonType_LessThanEqual = 5,
};

class cTkBlackboardComparisonTypeEnum
{
public:
    static const unsigned __int64 muNameHash = 0x2412AB95A81851E8;
    static const unsigned __int64 muTemplateHash = 0x42A415F679C0191E;
    static const int miNumMembers = 1;

    eComparisonType meComparisonType;

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
