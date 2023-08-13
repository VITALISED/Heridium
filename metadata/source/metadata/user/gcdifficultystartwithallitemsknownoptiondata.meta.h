#pragma once
#include "../../../../../../pch.h"

class cGcKnownThingsPreset;
class cGcInventoryContainer;
class cGcInventoryContainer;

class cGcDifficultyStartWithAllItemsKnownOptionData
{
    static const unsigned __int64 muNameHash = 0xBE7C831F4A1A69E6;
    static const unsigned __int64 muTemplateHash = 0xE7DD51918761C06;
    static const int miNumMembers = 3;

    cGcKnownThingsPreset mInitialKnownThings;
    cGcInventoryContainer mInitialShipInventory;
    cGcInventoryContainer mInitialWeaponInventory;

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
