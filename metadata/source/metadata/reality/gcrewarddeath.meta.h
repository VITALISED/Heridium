#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"
#include "../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcseasonsavestateondeath.meta.h"

class cGcRewardDeath
{
public:
    static const unsigned __int64 muNameHash = 0xAF7590464B3BC984;
    static const unsigned __int64 muTemplateHash = 0x1054EE521BB65CEC;
    static const int miNumMembers = 14;

    TkID<128> mPlayerDamage;
    float mfFadeDuration;
    cTkColour mInitialFadeColour;
    cTkCurveType mFadeCurve;
    float mfBlackScreenBeforeQuote;
    float mfTimeToSpendDead;
    TkID<256> mDeathQuote;
    TkID<256> mDeathAuthor;
    cGcAudioWwiseEvents mAudioEvent;
    cGcSeasonSaveStateOnDeath mSetSeasonSaveState;
    bool mbOverrideShipSpin;
    cTkVector2 mDeathSpinRoll;
    cTkVector2 mDeathSpinPitch;
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
