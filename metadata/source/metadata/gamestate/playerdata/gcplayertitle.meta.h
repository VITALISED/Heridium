#pragma once

#include "../../../../../../../pch.h"
class cGcInteractionType;
class cGcAlienRace;

class cGcPlayerTitle
{
    static const unsigned __int64 muNameHash = 9678177492062908367;
    static const unsigned __int64 muTemplateHash = 6733371801815536327;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
