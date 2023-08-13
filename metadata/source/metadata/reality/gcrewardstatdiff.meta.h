#pragma once
#include "../../../../../../pch.h"

class cGcCurrency;

class cGcRewardStatDiff
{
    static const unsigned __int64 muNameHash = 0x9F1240710CA7E631;
    static const unsigned __int64 muTemplateHash = 0x26EF81DE98F050DD;
    static const int miNumMembers = 6;

    TkID<128> mCoreStat;
    TkID<128> mCompareAndSetStat;
    TkID<128> mSubstanceID;
    cGcCurrency mRewardCurrency;
    int miAmountPerStat;
    int miStatRewardCap;

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
