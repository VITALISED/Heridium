#pragma once
#include "../../../../../../pch.h"

enum eGunType
{
    EGunType_Laser = 0,
    EGunType_Projectile = 1,
    EGunType_Missile = 2,
};

class cGcTurretComponentData
{
    static const unsigned __int64 muNameHash = 0x88530A815E5B1B46;
    static const unsigned __int64 muTemplateHash = 0x88883A0B94FB8352;
    static const int miNumMembers = 28;

    eGunType meGunType;
    TkID<128> mLaserEffectId;
    TkID<128> mLaserMuzzleFlashId;
    TkID<128> mProjectileId;
    TkID<128> mProjectileMuzzleFlashId;
    TkID<128> mMissileId;
    bool mbHasFreighterAlertLight;
    float mfTurretRange;
    float mfTurretLaserShootTime;
    float mfTurretLaserLength;
    float mfTurretLaserMoveSpeed;
    float mfTurretLaserActiveTime;
    float mfTurretLaserAbortDistance;
    float mfTurretShootPauseTime;
    int miTurretBurstCount;
    float mfTurretBurstTime;
    float mfTurretMissileLaunchTime;
    float mfTurretMissileLaunchSpeed;
    float mfTurretMaxDownAngle;
    float mfTurretSlerpFactor;
    float mfTurretAngle;
    float mfTurretProjectileRange;
    float mfTurretMissileRange;
    float mfTurretDispersionAngle;
    bool mbRemotePlayersCanDamage;
    bool mbCanMoveDuringBurst;
    bool mbFireInTurretFacing;
    float mfTurretAimOffset;

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
