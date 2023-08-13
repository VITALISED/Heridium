#pragma once
#include "pch.h"

class cTkEqualityEnum;

class cGcMissionConditionExpeditionCount
{
public:
    static const unsigned __int64 muNameHash = 0xA4E47B76AADB4816;
    static const unsigned __int64 muTemplateHash = 0x23379BA5EFBE3535;
    static const int miNumMembers = 7;

    int miExpeditionCount;
    bool mbOnlyCountIfActive;
    bool mbOnlyCountIfActiveWithRemainingEvents;
    bool mbOnlyCountIfFueled;
    bool mbOnlyCountAwaitingDebrief;
    bool mbActiveExpeditionsCountAsFueled;
    cTkEqualityEnum mTest;

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
