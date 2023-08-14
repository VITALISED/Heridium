#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/vehicles/gcmechweaponlocation.meta.h"
#include "../../../../../metadata/source/metadata/simulation/vehicles/gcvehicleweaponmuzzledata.meta.h"
#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcSentinelMechWeaponData
{
public:
    static const unsigned __int64 muNameHash = 0x4484F9F6C0F33596;
    static const unsigned __int64 muTemplateHash = 0x750D6BFFAD20F7C5;
    static const int miNumMembers = 19;

    TkID<128> mId;
    TkID<128> mProjectile;
    int miProjectilesPerShot;
    float mfProjectileSpread;
    float mfFireInterval;
    int miNumShotsMin;
    int miNumShotsMax;
    float mfCooldownTimeMin;
    float mfCooldownTimeMax;
    float mfIdealRange;
    float mfMinRange;
    float mfMaxRange;
    float mfAttackAngle;
    float mfExplosionRadius;
    float mfInheritInitialVelocity;
    cGcMechWeaponLocation mShootLocation;
    cGcVehicleWeaponMuzzleData mMuzzleData;
    cGcAudioWwiseEvents mStartFireAudioEvent;
    cGcAudioWwiseEvents mStopFireAudioEvent;

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
