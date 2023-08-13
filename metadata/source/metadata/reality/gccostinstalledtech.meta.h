#pragma once
#include "pch.h"

enum eInventoryToCheck
{
    EInventoryToCheck_All = 0,
    EInventoryToCheck_Suit = 1,
    EInventoryToCheck_Ship = 2,
    EInventoryToCheck_Weapon = 3,
    EInventoryToCheck_Freighter = 4,
    EInventoryToCheck_Buggy = 5,
};

class cGcCostInstalledTech
{
public:
    static const unsigned __int64 muNameHash = 0xF6CA47F9F51F553F;
    static const unsigned __int64 muTemplateHash = 0xA1DCDC3F66BF2F2D;
    static const int miNumMembers = 2;

    TkID<128> mId;
    eInventoryToCheck meInventoryToCheck;

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
