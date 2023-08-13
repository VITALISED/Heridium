#pragma once
#include "../../../../../../../pch.h"

enum eDamageType
{
    EDamageType_Gun = 0,
    EDamageType_Laser = 1,
    EDamageType_Shotgun = 2,
    EDamageType_Burst = 3,
    EDamageType_Rail = 4,
    EDamageType_Cannon = 5,
    EDamageType_Explosion = 6,
    EDamageType_Melee = 7,
    EDamageType_ShipGun = 8,
    EDamageType_ShipLaser = 9,
    EDamageType_ShipShotgun = 10,
    EDamageType_ShipMinigun = 11,
    EDamageType_ShipRockets = 12,
    EDamageType_ShipPlasma = 13,
    EDamageType_VehicleGun = 14,
    EDamageType_VehicleLaser = 15,
    EDamageType_SentinelLaser = 16,
    EDamageType_PlayerDamage = 17,
    EDamageType_PlayerWeapons = 18,
    EDamageType_ShipWeapons = 19,
    EDamageType_VehicleWeapons = 20,
    EDamageType_CombatEffects = 21,
    EDamageType_Fiend = 22,
};

class cGcDamageType
{
    static const unsigned __int64 muNameHash = 0xCD0F83EA324443E1;
    static const unsigned __int64 muTemplateHash = 0x3CC505295BDAFC43;
    static const int miNumMembers = 1;

    eDamageType meDamageType;

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
