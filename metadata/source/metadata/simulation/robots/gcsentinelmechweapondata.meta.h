#pragma once

#include "../../../../../../../pch.h"
class cGcMechWeaponLocation;
class cGcVehicleWeaponMuzzleData;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;

class cGcSentinelMechWeaponData
{
    static const unsigned __int64 muNameHash = 4937345929699341718;
    static const unsigned __int64 muTemplateHash = 8434516423000258501;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
