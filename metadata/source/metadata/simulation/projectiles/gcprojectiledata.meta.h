#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"
#include "../../../../../metadata/source/metadata/simulation/projectiles/gcdamagetype.meta.h"
#include "../../../../../metadata/source/metadata/simulation/projectiles/gcprojectilelinedata.meta.h"

enum exBehaviourFlags
{
    EBehaviourFlags_DestroyTerrain = 1,
    EBehaviourFlags_DestroyAsteroids = 2,
    EBehaviourFlags_GatherResources = 4,
    EBehaviourFlags_Homing = 8,
    EBehaviourFlags_HomingLaser = 16,
    EBehaviourFlags_ScareCreatures = 32,
    EBehaviourFlags_ExplosionForce = 64,
};

enum eClass
{
    EClass_Player = 0,
    EClass_PlayerShip = 1,
    EClass_Ship = 2,
    EClass_Robot = 3,
};
#include "../../../../../metadata/source/metadata/simulation/projectiles/gcprojectileimpactdata.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcimpactcombateffectdata.meta.h"

class cGcProjectileData
{
public:
    static const unsigned __int64 muNameHash = 0x98B648B5C054B7F7;
    static const unsigned __int64 muTemplateHash = 0x37F1B214BC74234A;
    static const int miNumMembers = 44;

    TkID<128> mId;
    cGcResourceElement mModel;
    cGcAudioWwiseEvents mFireAudioEvent;
    cGcAudioWwiseEvents mChargedFireAudioEvent;
    cGcAudioWwiseEvents mOverheatAudioEvent;
    float mfScale;
    bool mbIsAutonomous;
    bool mbApplyCombatLevelMultipliers;
    float mfRadius;
    float mfCapsuleHeight;
    float mfDefaultSpeed;
    float mfGravity;
    float mfLife;
    float mfOffset;
    float mfRagdollPush;
    float mfPhysicsPush;
    float mfDroneImpulse;
    int miDefaultDamage;
    float mfExtraPlayerDamage;
    cGcDamageType mDamageType;
    int miDefaultBounces;
    float mfBounceMaxSpeed;
    float mfBounceDamping;
    float mfBounceFinalStopTime;
    bool mbHitOnBounce;
    TkID<128> mPlayerDamage;
    float mfCriticalHitModifier;
    float mfPiercingDamagePercentage;
    bool mbUseCustomBulletData;
    cGcProjectileLineData mCustomBulletData;
    bool mbUseDamageNumberData;
    float mfDamageImpactMergeTime;
    float mfDamageImpactTimeBetweenNumbers;
    float mfDamageImpactMinDistance;
    cTkColour mColour;
    bool mbOverrideLightColour;
    cTkColour mLightColour;
    exBehaviourFlags mexBehaviourFlags;
    eClass meClass;
    TkID<128> mDefaultImpact;
    TkID<128> mCriticalImpact;
    cTkDynamicArray<cGcProjectileImpactData> maImpacts;
    cTkVector3 mImpactOffset;
    cTkDynamicArray<cGcImpactCombatEffectData> maCombatEffectsOnImpact;

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
