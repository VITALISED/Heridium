#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/stats/gcstattype.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcJourneyMedal
{
public:
    static const unsigned __int64 muNameHash = 0x33CAC73016241300;
    static const unsigned __int64 muTemplateHash = 0x2A90662F35B374DF;
    static const int miNumMembers = 11;

    TkID<128> mLevelledStatID;
    TkID<256> mMedalTitle;
    TkID<256> mMedalProgressText;
    TkID<256> mPinnedDescription;
    TkID<128> mPinnedMission;
    cGcStatType mStatType;
    bool mbOverallJourneyDummy;
    cTkTextureResource mIconNone;
    cTkTextureResource mIconBronze;
    cTkTextureResource mIconSilver;
    cTkTextureResource mIconGold;

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
