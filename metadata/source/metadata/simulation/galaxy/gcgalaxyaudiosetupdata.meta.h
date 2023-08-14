#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"
#include "../../../../../metadata/source/metadata/audio/gcaudiowwisertpcs.meta.h"

class cGcGalaxyAudioSetupData
{
public:
    static const unsigned __int64 muNameHash = 0xA3F156D44BBFB2B9;
    static const unsigned __int64 muTemplateHash = 0xCD1747D3733E529B;
    static const int miNumMembers = 17;

    cGcAudioWwiseEvents mEventMapEnter;
    cGcAudioWwiseEvents mEventMapExit;
    cGcAudioWwiseEvents mEventSystemSelect;
    cGcAudioWwiseEvents mEventSystemDeselect;
    cGcAudioWwiseEvents mEventTextAppear;
    cGcAudioWwiseEvents mEventRouteLines;
    cGcAudioWwiseEvents mEventAddWaypoint;
    cGcAudioWwiseEvents mEventRemoveWaypoint;
    cGcAudioWwiseEvents mEventWaypointError;
    cGcAudioWwiseEvents mEventWaypointLoop;
    cGcAudioWwiseEvents mEventNavmodeChange;
    cGcAudioWwiseEvents mEventNavmodeChangeFailed;
    cGcAudioWwiseEvents mEventNavmodePathMove;
    cGcAudioWwiseEvents mEventPlanetRumble;
    cGcAudioWwiseRTPCs mRTPCStarWhoosh;
    float mfWhooshClip;
    float mfWhooshMultiplier;

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
