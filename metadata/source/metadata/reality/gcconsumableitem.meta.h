#pragma once

#include "../../../../../../pch.h"
class cGcAudioWwiseEvents;

class cGcConsumableItem
{
    static const unsigned __int64 muNameHash = 15735381376459318931;
    static const unsigned __int64 muTemplateHash = 4632801197359708890;
    static const int miNumMembers = 12;

    TkID<128> mID;
    TkID<128> mRewardID;
    TkID<128> mTutorialRewardID;
    cTkFixedString<64,char> macButtonLocID;
    cTkFixedString<64,char> macButtonSubLocID;
    bool mbCloseInventoryWhenUsed;
    cGcAudioWwiseEvents mAudioEventOnOpen;
    cTkFixedString<64,char> macRewardFailedLocID;
    bool mbDestroyItemWhenConsumed;
    bool mbAddCommunityTierClassIcon;
    bool mbSuppressResourceMessage;
    TkID<256> mCustomOSD;

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
