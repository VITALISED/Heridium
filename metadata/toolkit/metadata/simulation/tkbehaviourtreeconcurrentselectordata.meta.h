#pragma once
#include "../../../../pch.h"

enum eSucceedWhen
{
    ESucceedWhen_AllChildrenSucceed = 0,
    ESucceedWhen_AnyChildSucceeds = 1,
};

enum eFailWhen
{
    EFailWhen_AnyChildFails = 0,
    EFailWhen_AllChildrenFail = 1,
};

class cTkBehaviourTreeConcurrentSelectorData
{
public:
    static const unsigned __int64 muNameHash = 0x5A80A9FE39381A77;
    static const unsigned __int64 muTemplateHash = 0x27BAAF4A069EC62C;
    static const int miNumMembers = 4;

    TkID<128> mName;
    eSucceedWhen meSucceedWhen;
    eFailWhen meFailWhen;
    cTkDynamicArray<cTkClassPointer> maChildren;

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
