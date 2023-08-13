#pragma once
#include "../../../../../../../pch.h"

enum eWeaponMode
{
    EWeaponMode_Bolt = 0,
    EWeaponMode_Shotgun = 1,
    EWeaponMode_Burst = 2,
    EWeaponMode_Rail = 3,
    EWeaponMode_Cannon = 4,
    EWeaponMode_Laser = 5,
    EWeaponMode_Grenade = 6,
    EWeaponMode_MineGrenade = 7,
    EWeaponMode_Scope = 8,
    EWeaponMode_FrontShield = 9,
    EWeaponMode_Melee = 10,
    EWeaponMode_TerrainEdit = 11,
    EWeaponMode_SunLaser = 12,
    EWeaponMode_Spawner = 13,
    EWeaponMode_SpawnerAlt = 14,
    EWeaponMode_SoulLaser = 15,
    EWeaponMode_Flamethrower = 16,
    EWeaponMode_StunGrenade = 17,
    EWeaponMode_Stealth = 18,
};

class cGcPlayerWeapons
{
    static const unsigned __int64 muNameHash = 0x8A17532BB2410967;
    static const unsigned __int64 muTemplateHash = 0xBE69B1FFFEBFE9FD;
    static const int miNumMembers = 1;

    eWeaponMode meWeaponMode;

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
