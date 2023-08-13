#pragma once
#include "pch.h"

enum eAIShipWeapon
{
    EAIShipWeapon_Projectile = 0,
    EAIShipWeapon_Laser = 1,
    EAIShipWeapon_MiningLaser = 2,
};

class cGcAIShipWeapons
{
public:
    static const unsigned __int64 muNameHash = 0x1C73992CC7DA5C9A;
    static const unsigned __int64 muTemplateHash = 0xF9C5E33D19947755;
    static const int miNumMembers = 1;

    eAIShipWeapon meAIShipWeapon;

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
