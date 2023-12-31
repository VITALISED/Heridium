#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcnumberedtextlist.meta.h"

class cGcExpeditionEventData
{
public:
    static const unsigned __int64 muNameHash = 0x48A0FEC50BBF269C;
    static const unsigned __int64 muTemplateHash = 0x228F0F1AFB532DB0;
    static const int miNumMembers = 19;

    TkID<256> mID;
    cTkFixedArray<float, 5> maStatContribution;
    int miDifficultyModifier;
    int miDifficultyVarianceModifier;
    int miAdditionalShipDifficultyIncrease;
    TkID<128> mEasySuccessReward;
    TkID<128> mWhaleReward;
    TkID<128> mSuccessReward;
    TkID<128> mFailureReward;
    cGcNumberedTextList mSuccessDescriptionList;
    cGcNumberedTextList mSuccessWhaleDescriptionList;
    cGcNumberedTextList mFailureDescriptionList;
    cGcNumberedTextList mGenericSuccessDescriptionList;
    cGcNumberedTextList mGenericFailureDescriptionList;
    cGcNumberedTextList mGenericFailureWhaleDescriptionList;
    cGcNumberedTextList mDamageDescriptionList;
    cGcNumberedTextList mSecondaryDescriptionList;
    cGcNumberedTextList mSecondaryFailureDescriptionList;
    cGcNumberedTextList mSecondaryDamageDescriptionList;

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
