#pragma once
#include "../../../../../../pch.h"

class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;
class cGcStatsTypes;

class cGcCombatEffectData
{
    static const unsigned __int64 muNameHash = 0x6D475929020A9A4D;
    static const unsigned __int64 muTemplateHash = 0x167EFA6C04E11F70;
    static const int miNumMembers = 9;

    TkID<128> mDamageId;
    TkID<128> mParticlesId;
    cGcAudioWwiseEvents mStartAudio;
    cGcAudioWwiseEvents mEndAudio;
    cGcStatsTypes mStat;
    bool mbOverrideDamageNumberData;
    float mfDamageMergeTime;
    float mfDamageTimeBetweenNumbers;
    float mfDamageMinDistance;

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
