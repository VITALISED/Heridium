#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcConsumableItem
{
public:
    static const unsigned __int64 muNameHash = 0xDA5F4DFE0527A693;
    static const unsigned __int64 muTemplateHash = 0x404B0424B3A13ADA;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
