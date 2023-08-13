#pragma once

#include "../../../../../../../../pch.h"
enum eQuickMenuActions
{
    EQuickMenuActions_None = 0,
    EQuickMenuActions_CallFreighter = 1,
    EQuickMenuActions_DismissFreighter = 2,
    EQuickMenuActions_SummonNexus = 3,
    EQuickMenuActions_CallShip = 4,
    EQuickMenuActions_CallSquadron = 5,
    EQuickMenuActions_SummonVehicleSubMenu = 6,
    EQuickMenuActions_SummonBuggy = 7,
    EQuickMenuActions_SummonBike = 8,
    EQuickMenuActions_SummonTruck = 9,
    EQuickMenuActions_SummonWheeledBike = 10,
    EQuickMenuActions_SummonHovercraft = 11,
    EQuickMenuActions_SummonSubmarine = 12,
    EQuickMenuActions_SummonMech = 13,
    EQuickMenuActions_VehicleAIToggle = 14,
    EQuickMenuActions_VehicleScan = 15,
    EQuickMenuActions_VehicleScanSelect = 16,
    EQuickMenuActions_VehicleRestartRace = 17,
    EQuickMenuActions_Torch = 18,
    EQuickMenuActions_GalaxyMap = 19,
    EQuickMenuActions_PhotoMode = 20,
    EQuickMenuActions_ChargeMenu = 21,
    EQuickMenuActions_Charge = 22,
    EQuickMenuActions_ChargeSubMenu = 23,
    EQuickMenuActions_Repair = 24,
    EQuickMenuActions_BuildMenu = 25,
    EQuickMenuActions_CommunicatorReceive = 26,
    EQuickMenuActions_CommunicatorInitiate = 27,
    EQuickMenuActions_ThirdPersonCharacter = 28,
    EQuickMenuActions_ThirdPersonShip = 29,
    EQuickMenuActions_ThirdPersonVehicle = 30,
    EQuickMenuActions_EconomyScan = 31,
    EQuickMenuActions_EmoteMenu = 32,
    EQuickMenuActions_Emote = 33,
    EQuickMenuActions_UtilitySubMenu = 34,
    EQuickMenuActions_SummonSubMenu = 35,
    EQuickMenuActions_SummonShipSubMenu = 36,
    EQuickMenuActions_ChangeSecondaryWeaponMenu = 37,
    EQuickMenuActions_ChangeSecondaryWeapon = 38,
    EQuickMenuActions_ChooseCreatureFoodMenu = 39,
    EQuickMenuActions_ChooseCreatureFood = 40,
    EQuickMenuActions_EmergencyWarp = 41,
    EQuickMenuActions_SwapMultitool = 42,
    EQuickMenuActions_SwapMultitoolSubMenu = 43,
    EQuickMenuActions_CreatureSubMenu = 44,
    EQuickMenuActions_SummonPet = 45,
    EQuickMenuActions_SummonPetSubMenu = 46,
    EQuickMenuActions_WarpToNexus = 47,
    EQuickMenuActions_PetUI = 48,
    EQuickMenuActions_ByteBeatSubMenu = 49,
    EQuickMenuActions_ByteBeatPlay = 50,
    EQuickMenuActions_ByteBeatStop = 51,
    EQuickMenuActions_ByteBeatLibrary = 52,
    EQuickMenuActions_ReportBase = 53,
    EQuickMenuActions_CargoShield = 54,
    EQuickMenuActions_CallRocket = 55,
    EQuickMenuActions_Invalid = 56,
};

class cGcQuickMenuActions
{
    static const unsigned __int64 muNameHash = 6839964501989418946;
    static const unsigned __int64 muTemplateHash = 15040070069203683809;
    static const int miNumMembers = 1;

    eQuickMenuActions meQuickMenuActions;

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
