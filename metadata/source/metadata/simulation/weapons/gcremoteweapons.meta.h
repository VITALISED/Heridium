#pragma once
#include "../../../../../pch.h"

enum eRemoteWeaponType
{
    ERemoteWeaponType_Laser = 0,
    ERemoteWeaponType_VehicleLaser = 1,
    ERemoteWeaponType_AIMechLaser = 2,
    ERemoteWeaponType_ShipLaser = 3,
    ERemoteWeaponType_ShipLaser2 = 4,
    ERemoteWeaponType_RailLaser = 5,
    ERemoteWeaponType_NumLasers = 6,
    ERemoteWeaponType_BoltCaster = 7,
    ERemoteWeaponType_Shotgun = 8,
    ERemoteWeaponType_Cannon = 9,
    ERemoteWeaponType_Burst = 10,
    ERemoteWeaponType_MineGrenade = 11,
    ERemoteWeaponType_BounceGrenade = 12,
    ERemoteWeaponType_StunGrenade = 13,
    ERemoteWeaponType_VehicleCanon = 14,
    ERemoteWeaponType_AIMechCanon = 15,
    ERemoteWeaponType_ShipPhoton = 16,
    ERemoteWeaponType_ShipShotgun = 17,
    ERemoteWeaponType_ShipMinigun = 18,
    ERemoteWeaponType_ShipPlasma = 19,
    ERemoteWeaponType_ShipRocket = 20,
    ERemoteWeaponType_None = 21,
};

class cGcRemoteWeapons
{
public:
    static const unsigned __int64 muNameHash = 0x3239FD75543805A7;
    static const unsigned __int64 muTemplateHash = 0xC1E9F7C3F86D9EDD;
    static const int miNumMembers = 1;

    eRemoteWeaponType meRemoteWeaponType;

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
