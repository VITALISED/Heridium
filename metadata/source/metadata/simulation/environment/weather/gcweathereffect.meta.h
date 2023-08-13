#pragma once

#include "../../../../../../../../pch.h"
enum eSpawnConditions
{
    ESpawnConditions_Anytime = 0,
    ESpawnConditions_DuringStorm = 1,
    ESpawnConditions_AtNight = 2,
    ESpawnConditions_NotInStorm = 3,
    ESpawnConditions_AtNightNotInStorm = 4,
};

enum eWeatherEffectBehaviour
{
    EWeatherEffectBehaviour_Static = 0,
    EWeatherEffectBehaviour_Wander = 1,
    EWeatherEffectBehaviour_ChasePlayer = 2,
};

enum eWeatherEffectSpawnType
{
    EWeatherEffectSpawnType_Single = 0,
    EWeatherEffectSpawnType_Cluster = 1,
    EWeatherEffectSpawnType_Patch = 2,
};
class cGcAudioWwiseEvents;

class cGcWeatherEffect
{
    static const unsigned __int64 muNameHash = 4728305688702866582;
    static const unsigned __int64 muTemplateHash = 1133737116517285603;
    static const int miNumMembers = 41;

    TkID<128> mId;
    TkID<256> mOSDMessage;
    cTkDynamicArray<cGcWeightedFilename> maEffects;
    eSpawnConditions meSpawnConditions;
    int miMaxHazardsOfThisTypeActive;
    TkID<128> mForcedOnByHazard;
    TkID<128> mBlockedByCluster;
    eWeatherEffectBehaviour meWeatherEffectBehaviour;
    eWeatherEffectSpawnType meWeatherEffectSpawnType;
    bool mbRandomRotationAroundUp;
    float mfMinSpawnScale;
    float mfMaxSpawnScale;
    int miSpawnAttemptsPerRegion;
    float mfSpawnChancePerSecondPerAttempt;
    float mfChanceOfPlanetBeingExtreme;
    float mfSpawnChancePerSecondExtreme;
    float mfMinSpawnDistance;
    float mfMaxSpawnDistance;
    float mfMinLifetime;
    float mfMaxLifetime;
    float mfFadeoutStart;
    bool mbFadeoutVisuals;
    bool mbFadeoutAudio;
    cGcAudioWwiseEvents mAudio;
    cTkFixedString<128,char> macImpactGift;
    float mfImpactGiftChance;
    float mfClusterSpawnChance;
    float mfClusterMinLifetime;
    float mfClusterMaxLifetime;
    float mfPatchMaxTimeSpawnOffset;
    float mfPatchMinRadius;
    float mfPatchMaxRadius;
    int miPatchMinSpawns;
    int miPatchMaxSpawns;
    float mfPatchScaling;
    float mfMoveSpeed;
    float mfWanderMinRadius;
    float mfWanderMaxRadius;
    float mfWanderMinArcDeg;
    float mfWanderMaxArcDeg;
    cTkClassPointer mEffectData;

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
