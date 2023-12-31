#pragma once
#include "../../../../../../pch.h"

enum eRewardInventoryOverride
{
    ERewardInventoryOverride_None = 0,
    ERewardInventoryOverride_Suit = 1,
    ERewardInventoryOverride_Ship = 2,
    ERewardInventoryOverride_Vehicle = 3,
    ERewardInventoryOverride_Freighter = 4,
};

class cGcMissionSequenceReward
{
public:
    static const unsigned __int64 muNameHash = 0x7471FD77815538C2;
    static const unsigned __int64 muTemplateHash = 0x3589DA89D687D2BD;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macMessage;
    TkID<128> mReward;
    bool mbDoMissionBoardOverride;
    bool mbSilent;
    eRewardInventoryOverride meRewardInventoryOverride;
    cTkFixedString<128,char> macDebugText;

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
