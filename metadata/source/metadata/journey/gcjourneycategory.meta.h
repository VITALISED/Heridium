#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/journey/gcjourneycategorytype.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcgamemode.meta.h"
#include "../../../../metadata/source/metadata/simulation/missions/types/gcmissionfaction.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/journey/gcjourneymedal.meta.h"

class cGcJourneyCategory
{
public:
    static const unsigned __int64 muNameHash = 0x88F1E142115EF824;
    static const unsigned __int64 muTemplateHash = 0x6B7881FEB05B98C6;
    static const int miNumMembers = 9;

    cGcJourneyCategoryType mType;
    cGcGameMode mGameModeRestriction;
    cGcMissionFaction mFaction;
    TkID<256> mNameIDLower;
    TkID<256> mNameIDUpper;
    TkID<256> mDescriptionID;
    cTkTextureResource mIconOn;
    cTkTextureResource mIconOff;
    cTkDynamicArray<cGcJourneyMedal> maMedals;

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
