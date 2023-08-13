#pragma once

#include "../../../../../../../../pch.h"
class cTkEqualityEnum;

class cGcMissionConditionExpeditionCount
{
    static const unsigned __int64 muNameHash = 11881757466513066006;
    static const unsigned __int64 muTemplateHash = 2537668052040693045;
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
