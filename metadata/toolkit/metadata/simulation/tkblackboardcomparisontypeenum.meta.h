#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 2599328594204840424;
    static const unsigned __int64 muTemplateHash = 4801987251032561950;
    static const int miNumMembers = 1;

    eComparisonType meComparisonType;

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
