#pragma once
#include "../../../../../pch.h"

enum ePetAccessory
{
    EPetAccessory_None = 0,
    EPetAccessory_CargoCylinder = 1,
    EPetAccessory_Containers = 2,
    EPetAccessory_ShieldArmour = 3,
    EPetAccessory_SolarBattery = 4,
    EPetAccessory_Tank = 5,
    EPetAccessory_WingPanel = 6,
    EPetAccessory_TravelPack = 7,
    EPetAccessory_SpacePack = 8,
    EPetAccessory_CargoLong = 9,
    EPetAccessory_Antennae = 10,
    EPetAccessory_Computer = 11,
    EPetAccessory_Toolbelt = 12,
    EPetAccessory_LeftCanisters = 13,
    EPetAccessory_LeftEnergyCoil = 14,
    EPetAccessory_LeftFrigateTurret = 15,
    EPetAccessory_LeftHeadLights = 16,
    EPetAccessory_LeftArmourPlate = 17,
    EPetAccessory_LeftTurret = 18,
    EPetAccessory_LeftSupportSystem = 19,
    EPetAccessory_RightCanisters = 20,
    EPetAccessory_RightEnergyCoil = 21,
    EPetAccessory_RightFrigateTurret = 22,
    EPetAccessory_RightHeadLights = 23,
    EPetAccessory_RightArmourPlate = 24,
    EPetAccessory_RightTurret = 25,
    EPetAccessory_RightSupportSystem = 26,
};

class cGcPetAccessoryType
{
public:
    static const unsigned __int64 muNameHash = 0xB47279F1694E0681;
    static const unsigned __int64 muTemplateHash = 0xD19A2E040F8046A2;
    static const int miNumMembers = 1;

    ePetAccessory mePetAccessory;

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
