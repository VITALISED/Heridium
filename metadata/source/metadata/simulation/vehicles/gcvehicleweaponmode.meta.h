#pragma once
#include "../../../../../../../pch.h"

enum eVehicleWeaponMode
{
    EVehicleWeaponMode_Laser = 0,
    EVehicleWeaponMode_Gun = 1,
    EVehicleWeaponMode_TerrainEdit = 2,
    EVehicleWeaponMode_StunGun = 3,
};

class cGcVehicleWeaponMode
{
    static const unsigned __int64 muNameHash = 0xE3BDE57931D2177D;
    static const unsigned __int64 muTemplateHash = 0x673C5C3351471A1C;
    static const int miNumMembers = 1;

    eVehicleWeaponMode meVehicleWeaponMode;

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
