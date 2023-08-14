#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcsettlementjudgementdata.meta.h"

class cGcSettlementCustomJudgement
{
public:
    static const unsigned __int64 muNameHash = 0xD0AB76328A1D707;
    static const unsigned __int64 muTemplateHash = 0xAC60C40B229BE2E8;
    static const int miNumMembers = 3;

    TkID<128> mID;
    cGcSettlementJudgementData mData;
    TkID<256> mCustomCostText;

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
