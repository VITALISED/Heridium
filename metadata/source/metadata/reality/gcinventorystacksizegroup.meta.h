#pragma once
#include "../../../../../../pch.h"

enum eInventoryStackSizeGroup
{
    EInventoryStackSizeGroup_Default = 0,
    EInventoryStackSizeGroup_Personal = 1,
    EInventoryStackSizeGroup_PersonalCargo = 2,
    EInventoryStackSizeGroup_Ship = 3,
    EInventoryStackSizeGroup_ShipCargo = 4,
    EInventoryStackSizeGroup_Freighter = 5,
    EInventoryStackSizeGroup_FreighterCargo = 6,
    EInventoryStackSizeGroup_Vehicle = 7,
    EInventoryStackSizeGroup_Chest = 8,
    EInventoryStackSizeGroup_BaseCapsule = 9,
    EInventoryStackSizeGroup_MaintenanceObject = 10,
    EInventoryStackSizeGroup_UIPopup = 11,
};

class cGcInventoryStackSizeGroup
{
    static const unsigned __int64 muNameHash = 0x489841A427B2161E;
    static const unsigned __int64 muTemplateHash = 0x9C754924B696DACA;
    static const int miNumMembers = 1;

    eInventoryStackSizeGroup meInventoryStackSizeGroup;

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
