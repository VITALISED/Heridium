#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"
#include "../../../../../metadata/source/metadata/reality/gcrealitygameicons.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcencountertype.meta.h"

class cGcSentinelEncounterOverride
{
public:
    static const unsigned __int64 muNameHash = 0x858F65761E6CEB71;
    static const unsigned __int64 muTemplateHash = 0xDF0554595188CB5B;
    static const int miNumMembers = 17;

    TkID<128> mId;
    float mfSummonRadius;
    TkID<128> mSpawnID;
    TkID<128> mExtremeSpawnID;
    bool mbSpawnsAreAggressive;
    bool mbEncounterBlocksWantedSpawns;
    bool mbEncounterClearsWantedOnDefeat;
    bool mbIgnoreBuildingCrimesOnDefeat;
    TkID<256> mOSDMessage;
    TkID<256> mOSDOnDefeat;
    TkID<256> mOSDOnWaveStart;
    cGcAudioWwiseEvents mOSDOnWaveStartAudio;
    bool mbUseCustomOSDIcon;
    cGcRealityGameIcons mCustomOSDIcon;
    TkID<128> mStatusMessage;
    bool mbUseEncounterTypeOverride;
    cGcEncounterType mEncounterTypeOverride;

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
