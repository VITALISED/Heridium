#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcsettlementjudgementperkoption.meta.h"
#include "../../../../metadata/source/metadata/reality/gcsettlementstatchange.meta.h"

class cGcSettlementJudgementOption
{
public:
    static const unsigned __int64 muNameHash = 0x64786DD8F4475C9B;
    static const unsigned __int64 muTemplateHash = 0xBADC6797B5A16762;
    static const int miNumMembers = 11;

    TkID<256> mOptionText;
    cTkDynamicArray<cGcSettlementJudgementPerkOption> maPerks;
    bool mbHidePerkInJudgement;
    cTkDynamicArray<cGcSettlementStatChange> maStatChanges;
    cTkDynamicArray<TkID<128> > maAdditionalRewards;
    TkID<128> mChainedJudgementID;
    bool mbUsePolicyPerk;
    bool mbUsePolicyStat;
    bool mbUseGiftReward;
    bool mbUseTechPerk;
    bool mbOptionIsPositiveForNPC;

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
