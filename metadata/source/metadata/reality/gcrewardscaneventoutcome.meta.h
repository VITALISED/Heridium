#pragma once

#include "../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 2865810586110224066;
    static const unsigned __int64 muTemplateHash = 6567674074530546820;
    static const int miNumMembers = 1;

    eRewardScanEventOutcome meRewardScanEventOutcome;

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