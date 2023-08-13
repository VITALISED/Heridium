#pragma once

#include "../../../../../../pch.h"
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;
class cGcNumberedTextList;

class cGcExpeditionEventData
{
    static const unsigned __int64 muNameHash = 5233462889263605404;
    static const unsigned __int64 muTemplateHash = 2490225727519272368;
    static const int miNumMembers = 19;

    TkID<256> mID;
    cTkFixedArray<float> maStatContribution;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
