#pragma once
#include "pch.h"

enum eWeaponStatClass
{
    EWeaponStatClass_Pistol = 0,
    EWeaponStatClass_Rifle = 1,
    EWeaponStatClass_Pristine = 2,
    EWeaponStatClass_Alien = 3,
    EWeaponStatClass_Royal = 4,
};

class cGcWeaponClasses
{
public:
    static const unsigned __int64 muNameHash = 0xAD17D6D6D824A77D;
    static const unsigned __int64 muTemplateHash = 0x3A51F0A05E5EB04B;
    static const int miNumMembers = 1;

    eWeaponStatClass meWeaponStatClass;

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
