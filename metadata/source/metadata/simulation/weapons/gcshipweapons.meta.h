#pragma once
#include "../../../../../pch.h"

enum eShipWeapon
{
    EShipWeapon_Laser = 0,
    EShipWeapon_Projectile = 1,
    EShipWeapon_Shotgun = 2,
    EShipWeapon_Minigun = 3,
    EShipWeapon_Plasma = 4,
    EShipWeapon_Missile = 5,
    EShipWeapon_Rocket = 6,
};

class cGcShipWeapons
{
public:
    static const unsigned __int64 muNameHash = 0xCBDFDF631D9C73E8;
    static const unsigned __int64 muTemplateHash = 0x2F1DD25465633C5D;
    static const int miNumMembers = 1;

    eShipWeapon meShipWeapon;

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
