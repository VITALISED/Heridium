#pragma once

#include "../../../../../../../pch.h"
class cTkTextureResource;
class cGcPulseEncounterSpawnConditions;
class cGcAudioWwiseEvents;

class cGcPulseEncounterInfo
{
    static const unsigned __int64 muNameHash = 7310910852322042953;
    static const unsigned __int64 muTemplateHash = 7708114902151444507;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
