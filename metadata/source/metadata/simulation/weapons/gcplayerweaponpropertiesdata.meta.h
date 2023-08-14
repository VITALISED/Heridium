#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/weapons/gcplayerweaponclass.meta.h"
#include "../../../../../metadata/source/metadata/reality/stats/gcstatstypes.meta.h"
#include "../../../../../metadata/source/metadata/simulation/weapons/gcremoteweapons.meta.h"
#include "../../../../../metadata/source/metadata/simulation/weapons/gcplayerweaponbiomeproperties.meta.h"

class cGcPlayerWeaponPropertiesData
{
public:
    static const unsigned __int64 muNameHash = 0xD0F82AE353636444;
    static const unsigned __int64 muTemplateHash = 0x2F1095FDA8B8012A;
    static const int miNumMembers = 38;

    cGcPlayerWeaponClass mWeaponClass;
    cGcStatsTypes mStat;
    cGcRemoteWeapons mRemoteType;
    cTkFixedString<128,char> macMuzzleLaserResource;
    cTkFixedString<128,char> macMuzzleGunResource;
    TkID<128> mDefaultProjectile;
    TkID<128> mDefaultMuzzleIdleAnimId;
    TkID<128> mDefaultMuzzleFireAnimId;
    TkID<128> mDefaultMuzzleChargedAnimId;
    TkID<128> mDefaultMuzzleIdleParticlesId;
    TkID<128> mDefaultMuzzleFireParticlesId;
    TkID<128> mDefaultMuzzleChargedParticlesId;
    TkID<128> mDefaultWeaponIdleAnimId;
    TkID<128> mDefaultWeaponFireAnimId;
    TkID<128> mDefaultWeaponChargedAnimId;
    TkID<128> mDefaultWeaponFireParticlesId;
    float mfMuzzleFlashScale;
    float mfChargingMuzzleFlashMinScale;
    float mfChargingMuzzleFlashMaxScale;
    float mfVibrationScale;
    float mfRumbleScale;
    float mfParticlesOffsetMultiplier;
    TkID<128> mVibartionId;
    TkID<128> mShakeId;
    bool mbUseMuzzleLight;
    bool mbMuzzleLightUsesLaserColour;
    bool mbMuzzleLightUsesMuzzleColour;
    cTkColour mDefaultMuzzleLightColour;
    float mfMuzzleLightIntensity;
    bool mbFlashMuzzleOnProjectileFire;
    bool mbUsesCustomBiomeAnims;
    bool mbUsesCustomBiomeMuzzleParticles;
    bool mbUsesCustomBiomeProjectile;
    bool mbUsesCustomBiomeColour;
    bool mbUsesCustomBiomeFireAnims;
    bool mbUsesCustomBiomeFireParticles;
    bool mbUsesCustomBiomeStats;
    cTkDynamicArray<cGcPlayerWeaponBiomeProperties> maBiomeProperties;

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
