#pragma once
#include "../../../../../pch.h"

enum eWeaponClass
{
    EWeaponClass_None = 0,
    EWeaponClass_Projectile = 1,
    EWeaponClass_ChargedProjectile = 2,
    EWeaponClass_Laser = 3,
    EWeaponClass_Grenade = 4,
    EWeaponClass_Utility = 5,
    EWeaponClass_TerrainEditor = 6,
    EWeaponClass_Spawner = 7,
    EWeaponClass_SpawnerAlt = 8,
};

class cGcPlayerWeaponClass
{
public:
    static const unsigned __int64 muNameHash = 0x83ECCC918AB076A1;
    static const unsigned __int64 muTemplateHash = 0x61187D71A7849AFA;
    static const int miNumMembers = 1;

    eWeaponClass meWeaponClass;

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
