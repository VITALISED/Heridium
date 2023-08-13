#pragma once
#include "pch.h"

class cGcRewardUnlockSeasonReward
{
public:
    static const unsigned __int64 muNameHash = 0x7AB9EBA17278DE9B;
    static const unsigned __int64 muTemplateHash = 0xA07A7DD5110CAC;
    static const int miNumMembers = 6;

    TkID<128> mProductID;
    bool mbSilent;
    TkID<256> mEncryptedText;
    bool mbUseSpecialFormatting;
    bool mbMarkAsClaimedInShop;
    bool mbUniqueInventoryItem;

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
