#pragma once
#include "../../../../pch.h"

enum eRewardScanEventOutcome
{
    ERewardScanEventOutcome_Success = 0,
    ERewardScanEventOutcome_Interstellar = 1,
    ERewardScanEventOutcome_BadData = 2,
    ERewardScanEventOutcome_FailedToFindBase = 3,
    ERewardScanEventOutcome_Duplicate = 4,
    ERewardScanEventOutcome_NoBuilding = 5,
    ERewardScanEventOutcome_NoSystem = 6,
};

class cGcRewardScanEventOutcome
{
public:
    static const unsigned __int64 muNameHash = 0x27C5678B5AA766C2;
    static const unsigned __int64 muTemplateHash = 0x5B2510C614EF8484;
    static const int miNumMembers = 1;

    eRewardScanEventOutcome meRewardScanEventOutcome;

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
