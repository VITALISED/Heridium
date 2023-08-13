#pragma once
#include "../../../../../../../pch.h"

class cGcDroneWeaponData
{
    static const unsigned __int64 muNameHash = 0x7652773CA720B160;
    static const unsigned __int64 muTemplateHash = 0x16F8728F6FC68AAF;
    static const int miNumMembers = 16;

    TkID<128> mId;
    TkID<128> mProjectile;
    int miNumProjectiles;
    float mfProjectileSpread;
    float mfFireRate;
    bool mbChangeBarrelEachShot;
    float mfTimeout;
    int miNumShotsMin;
    int miNumShotsMax;
    float mfFireTimeMin;
    float mfFireTimeMax;
    float mfRange;
    float mfExplosionRadius;
    float mfInheritInitialVelocity;
    float mfMoveDistanceMin;
    float mfMoveDistanceMax;

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
