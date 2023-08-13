#pragma once

#include "../../../../../../../../../pch.h"
class cGcAudioWwiseEvents;
class cTkCurveType;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;

enum eDeathType
{
    EDeathType_Explode = 0,
    EDeathType_Drop = 1,
};

enum eSubType
{
    ESubType_Crystal = 0,
    ESubType_Tentacle = 1,
};

class cGcCreatureCrystalMovementDataParams
{
    static const unsigned __int64 muNameHash = 1311299654912964956;
    static const unsigned __int64 muTemplateHash = 10488843912212144913;
    static const int miNumMembers = 54;

    cTkDynamicArray<cGcBiomeSubType> maValidBiomes;
    cTkDynamicArray<TkID<256> > maValidDescriptors;
    int miNumShards;
    bool mbUseTerrainAngle;
    bool mbScaleOnAppear;
    cGcAudioWwiseEvents mCreationAudio;
    float mfSpawnDist;
    float mfDespawnDist;
    float mfMaxOffset;
    float mfMaxOffsetZ;
    float mfMaxTilt;
    float mfOffsetTilt;
    float mfMinScale;
    float mfMaxScale;
    float mfMinAppearTime;
    float mfMaxAppearTime;
    float mfAppearOvershoot;
    float mfMinDisappearTime;
    float mfMaxDisappearTime;
    float mfShowOffset;
    float mfHideOffset;
    float mfMinShowTime;
    bool mbCustomHideCurve;
    cTkCurveType mHideCurve;
    float mfIdleSpeedModifier;
    float mfWalkSpeedModifier;
    float mfRunSpeedModifier;
    float mfParticleScale;
    TkID<128> mDustEffect;
    cGcAudioWwiseEvents mAudio;
    cGcAudioWwiseEvents mRetractAudio;
    cGcAudioWwiseEvents mMoveStartAudio;
    cGcAudioWwiseEvents mMoveStopAudio;
    float mfDeathFadeStart;
    float mfDeathFadeTime;
    eDeathType meDeathType;
    eSubType meSubType;
    cTkFixedString<32,char> macTentacleStartJoint;
    cTkFixedString<32,char> macTentacleEndJoint;
    float mfTentacleSpeed;
    float mfTentacleChurnSpeed;
    float mfTentacleIdleLookChance;
    float mfTentacleStretchMin;
    float mfTentacleStretchMax;
    float mfTentacleMoveSwingAngle;
    float mfTentacleWalkSwingSpeed;
    float mfTentacleRunSwingSpeed;
    float mfTentacleRotationApplyBase;
    float mfTentacleRotationApplyTip;
    float mfTentacleMoveTimeMin;
    float mfTentacleMoveTimeMax;
    float mfTentaclePitchRange;
    float mfTentacleYawRange;
    float mfTentacleRollRange;

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
