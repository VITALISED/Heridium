#pragma once
#include "pch.h"

class cTkParticleBurstData;
class cTkEmitterFloatProperty;
class cTkEmitFromParticleInfo;
class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;
class cTkCurveType;
class cTkCurveType;
class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;

enum eDragType
{
    EDragType_IgnoreGravity = 0,
    EDragType_PhysicallyBased = 1,
    EDragType_ApplyWind = 2,
};

enum eSpawnOffsetType
{
    ESpawnOffsetType_Sphere = 0,
    ESpawnOffsetType_Box = 1,
    ESpawnOffsetType_Disc = 2,
    ESpawnOffsetType_Cone = 3,
    ESpawnOffsetType_Donut = 4,
    ESpawnOffsetType_Point = 5,
};
class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;
class cTkEmitterFloatProperty;

enum eAlignment
{
    EAlignment_Rotation = 0,
    EAlignment_Velocity = 1,
    EAlignment_VelocityScreenSpace = 2,
};

enum eBillboardAlignment
{
    EBillboardAlignment_Screen = 0,
    EBillboardAlignment_XLocal = 1,
    EBillboardAlignment_YLocal = 2,
    EBillboardAlignment_ZLocal = 3,
    EBillboardAlignment_NegativeXLocal = 4,
    EBillboardAlignment_NegativeYLocal = 5,
    EBillboardAlignment_NegativeZLocal = 6,
    EBillboardAlignment_ScreenWorld = 7,
};
class cTkCoordinateOrientation;
class cTkCoordinateOrientation;

enum eFlipbookPlaybackRate
{
    EFlipbookPlaybackRate_Absolute = 0,
    EFlipbookPlaybackRate_RelativeToMax = 1,
    EFlipbookPlaybackRate_OnceToCompletion = 2,
    EFlipbookPlaybackRate_Random = 3,
};
class cTkEmitterFloatProperty;

enum eOnRefractionsDisabled
{
    EOnRefractionsDisabled_Hide = 0,
    EOnRefractionsDisabled_AlphaBlend = 1,
};
class cTkFloatRange;

class cTkParticleData
{
public:
    static const unsigned __int64 muNameHash = 0xE9525144C4F949EB;
    static const unsigned __int64 muTemplateHash = 0x353F8C32388B38B0;
    static const int miNumMembers = 54;

    unsigned int muiAudioEvent;
    bool mbStartEnabled;
    bool mbOneshot;
    int miMaxCount;
    cTkParticleBurstData mBurstData;
    cTkEmitterFloatProperty mEmissionRate;
    float mfDelay;
    cTkEmitFromParticleInfo mEmitFromParticleInfo;
    cTkEmitterFloatProperty mParticleLife;
    cTkEmitterFloatProperty mEmitterLife;
    float mfEmitterMidLifeRatio;
    cTkCurveType mEmitterLifeCurve1;
    cTkCurveType mEmitterLifeCurve2;
    float mfEmitterSpreadAngle;
    float mfEmitterSpreadAngleMin;
    cTkVector3 mEmitterDirection;
    cTkEmitterFloatProperty mParticleSpeedMultiplier;
    cTkEmitterFloatProperty mParticleGravity;
    cTkEmitterFloatProperty mParticleDamping;
    cTkEmitterFloatProperty mParticleDrag;
    eDragType meDragType;
    float mfVariation;
    float mfStartOffset;
    eSpawnOffsetType meSpawnOffsetType;
    cTkVector3 mSpawnOffsetParams;
    cTkEmitterFloatProperty mParticleSize;
    cTkEmitterFloatProperty mParticleSizeY;
    float mfStartRotationVariation;
    cTkEmitterFloatProperty mRotation;
    eAlignment meAlignment;
    eBillboardAlignment meBillboardAlignment;
    cTkVector3 mRotationPivot;
    cTkCoordinateOrientation mUCoordinate;
    cTkCoordinateOrientation mVCoordinate;
    float mfVelocityInheritance;
    float mfTrackEmitterPosition;
    float mfRotateAroundEmitter;
    cTkVector3 mRotateAroundEmitterAxis;
    eFlipbookPlaybackRate meFlipbookPlaybackRate;
    float mfHueVariance;
    float mfSaturationVariance;
    float mfLightnessVariance;
    float mfAlphaVariance;
    cTkColour mColourStart;
    cTkColour mColourMiddle;
    cTkColour mColourEnd;
    cTkEmitterFloatProperty mAlphaThreshold;
    eOnRefractionsDisabled meOnRefractionsDisabled;
    bool mbFadeRefractionsAtScreenEdge;
    TkID<128> mUserColour;
    float mfMaxRenderDistance;
    float mfMaxSpawnDistance;
    float mfSoftFadeStrength;
    cTkFloatRange mCameraDistanceFade;

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
