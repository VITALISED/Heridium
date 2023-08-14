#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../../metadata/source/metadata/simulation/space/gcpulseencounterspawnconditions.meta.h"
#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcPulseEncounterInfo
{
public:
    static const unsigned __int64 muNameHash = 0x657592AF71342449;
    static const unsigned __int64 muTemplateHash = 0x6AF8B9AA06A1B81B;
    static const int miNumMembers = 14;

    TkID<128> mId;
    TkID<256> mMarkerLabel;
    TkID<256> mChatMessageName;
    cTkTextureResource mMarkerIcon;
    TkID<256> mCustomNotify;
    TkID<256> mCustomNotifyTitle;
    TkID<256> mCustomNotifyOSD;
    bool mbUseMarkerIconInOSD;
    cGcPulseEncounterSpawnConditions mSpawnConditions;
    float mfSpawnChance;
    float mfSpawnDistance;
    cGcAudioWwiseEvents mAudioEvent;
    bool mbSilent;
    cTkClassPointer mEncounter;

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
