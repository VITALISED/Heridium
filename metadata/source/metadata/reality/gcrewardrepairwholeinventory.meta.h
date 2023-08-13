#pragma once

#include "../../../../../../pch.h"
enum eInventoryToRepair
{
    EInventoryToRepair_Personal = 0,
    EInventoryToRepair_PersonalTech = 1,
    EInventoryToRepair_Ship = 2,
    EInventoryToRepair_ShipTech = 3,
    EInventoryToRepair_Freighter = 4,
    EInventoryToRepair_Vehicle = 5,
    EInventoryToRepair_AttachedAbandonedShip = 6,
    EInventoryToRepair_Weapon = 7,
};

class cGcRewardRepairWholeInventory
{
    static const unsigned __int64 muNameHash = 796108431115738908;
    static const unsigned __int64 muTemplateHash = 10021256247643556909;
    static const int miNumMembers = 1;

    eInventoryToRepair meInventoryToRepair;

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
