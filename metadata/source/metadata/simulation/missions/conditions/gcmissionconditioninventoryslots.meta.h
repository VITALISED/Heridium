#pragma once
#include "pch.h"

enum eInventoryTest
{
    EInventoryTest_Current = 0,
    EInventoryTest_Personal = 1,
    EInventoryTest_Ship = 2,
    EInventoryTest_Vehicle = 3,
};
class cTkEqualityEnum;

class cGcMissionConditionInventorySlots
{
public:
    static const unsigned __int64 muNameHash = 0xF112AB8FC14A734A;
    static const unsigned __int64 muTemplateHash = 0xAB070DA8379B54B1;
    static const int miNumMembers = 5;

    eInventoryTest meInventoryTest;
    int miSlotsFree;
    cTkEqualityEnum mTest;
    bool mbTestAllSlotsUnlocked;
    bool mbTestOnlyMainInventory;

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
