#pragma once

#include "../../../../../../pch.h"
class cGcSettlementJudgementOption
{
    static const unsigned __int64 muNameHash = 7239657179576753307;
    static const unsigned __int64 muTemplateHash = 13464750887215916898;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
