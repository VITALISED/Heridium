#pragma once
#include "pch.h"

class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;
class cGcDamageType;

class cGcLaserBeamData
{
public:
    static const unsigned __int64 muNameHash = 0x1AA966F8BA4E3153;
    static const unsigned __int64 muTemplateHash = 0xF076564F20014911;
    static const int miNumMembers = 35;

    TkID<128> mId;
    cTkFixedString<128,char> macBeamFile;
    cTkFixedString<128,char> macBeamCoreFile;
    float mfWidth;
    float mfHitWidth;
    float mfPulseFrequency;
    float mfPulseAmplitude;
    float mfStartTime;
    float mfEndTime;
    cGcAudioWwiseEvents mAudioStart;
    cGcAudioWwiseEvents mAudioStop;
    cGcAudioWwiseEvents mAudioOverheat;
    int miDefaultDamage;
    float mfExtraPlayerDamage;
    cGcDamageType mDamageType;
    float mfCriticalHitModifier;
    TkID<128> mPlayerDamage;
    TkID<128> mImpactEffect;
    cTkDynamicArray<cGcProjectileImpactData1> maImpacts;
    float mfHitRate;
    bool mbSingleHit;
    float mfRagdollPush;
    float mfPhysicsPush;
    float mfMiningHitRate;
    bool mbHasLight;
    bool mbCanMine;
    bool mbApplyCombatLevelMultipliers;
    float mfDroneImpulse;
    float mfPiercingDamagePercentage;
    float mfLightIntensity;
    cTkColour mLightColour;
    cTkColour mColour;
    cTkVector3 mImpactOffset;
    cTkDynamicArray<cGcImpactCombatEffectData1> maCombatEffectsOnImpact;
    cTkDynamicArray<cGcCombatEffectDamageMultiplier1> maCombatEffectDamageMultipliers;

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
