#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/components/gameplay/gcinteractiontype.meta.h"
#include "../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcPlayerTitle
{
public:
    static const unsigned __int64 muNameHash = 0x864FCB26DF972FCF;
    static const unsigned __int64 muTemplateHash = 0x5D71BDFA93D8D2C7;
    static const int miNumMembers = 15;

    TkID<128> mID;
    TkID<256> mTitle;
    TkID<256> mUnlockDescription;
    TkID<256> mAlreadyUnlockedDescription;
    TkID<128> mRevealedBy;
    TkID<128> mUnlockedByProductRecipe;
    TkID<128> mUnlockedByMission;
    TkID<128> mUnlockedByTrophy;
    TkID<128> mUnlockedByStat;
    float mfUnlockedByStatValue;
    int miUnlockedByLeveledStatRank;
    cGcInteractionType mUnlockedByInteraction;
    int miUnlockedByInteractionIndex;
    cGcAlienRace mUnlockedByInteractionRace;
    bool mbUnlockedByInteractionOnlyTestMainRaces;

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
