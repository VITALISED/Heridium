#pragma once

#include "../../../../../../../pch.h"
class cGcAudioWwiseEvents;
class cGcRealityGameIcons;
class cGcEncounterType;

class cGcSentinelEncounterOverride
{
    static const unsigned __int64 muNameHash = 9624022486705040241;
    static const unsigned __int64 muTemplateHash = 16070343587938224987;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
