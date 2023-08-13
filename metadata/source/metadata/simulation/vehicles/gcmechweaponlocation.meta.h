#pragma once

#include "../../../../../../../pch.h"
enum eMechWeaponLocation
{
    EMechWeaponLocation_TurretExocraft = 0,
    EMechWeaponLocation_TurretSentinel = 1,
    EMechWeaponLocation_ArmLeft = 2,
    EMechWeaponLocation_ArmRight = 3,
};

class cGcMechWeaponLocation
{
    static const unsigned __int64 muNameHash = 9787126270039822756;
    static const unsigned __int64 muTemplateHash = 3953969466747334253;
    static const int miNumMembers = 1;

    eMechWeaponLocation meMechWeaponLocation;

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
