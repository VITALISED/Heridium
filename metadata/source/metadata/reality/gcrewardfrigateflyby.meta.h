#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/gcfrigateflybytype.meta.h"
#include "../../../../metadata/source/metadata/simulation/player/gcplayercommunicatormessage.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcRewardFrigateFlyby
{
public:
    static const unsigned __int64 muNameHash = 0x3FACFB36175544A6;
    static const unsigned __int64 muTemplateHash = 0xEC3F6AAE52BA8457;
    static const int miNumMembers = 8;

    cGcFrigateFlybyType mFlybyType;
    float mfAppearanceDelay;
    TkID<256> mCommunicatorOSDLocId;
    cGcPlayerCommunicatorMessage mCommunicatorMessage;
    cTkTextureResource mMarkerIcon;
    cGcAudioWwiseEvents mPulseAudio;
    cGcAudioWwiseEvents mAudioSting;
    TkID<128> mCameraShake;

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
