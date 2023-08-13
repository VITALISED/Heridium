#pragma once

#include "../../../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 8390766270480726210;
    static const unsigned __int64 muTemplateHash = 3857854841364140733;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
