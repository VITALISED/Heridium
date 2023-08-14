#pragma once
#include "../../../../../../pch.h"

enum eConditionTest
{
    EConditionTest_AnyFalse = 0,
    EConditionTest_AllFalse = 1,
    EConditionTest_AnyTrue = 2,
    EConditionTest_AllTrue = 3,
};

class cGcMissionConditionTest
{
public:
    static const unsigned __int64 muNameHash = 0xC1BECA54193DD3FB;
    static const unsigned __int64 muTemplateHash = 0x30816B6D0D302F6E;
    static const int miNumMembers = 1;

    eConditionTest meConditionTest;

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
