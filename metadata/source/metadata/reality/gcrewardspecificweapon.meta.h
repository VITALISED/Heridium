#pragma once
#include "../../../../../../pch.h"

class cGcInventoryContainer;
class cGcInventoryLayout;
class cGcExactResource;
class cGcWeaponClasses;

class cGcRewardSpecificWeapon
{
    static const unsigned __int64 muNameHash = 0xF3710AB8A6F40A88;
    static const unsigned __int64 muTemplateHash = 0x7125A5C6424DD767;
    static const int miNumMembers = 8;

    cGcInventoryContainer mWeaponInventory;
    cGcInventoryLayout mWeaponLayout;
    cGcExactResource mWeaponResource;
    cGcWeaponClasses mWeaponType;
    TkID<256> mNameOverride;
    bool mbIsGift;
    bool mbIsRewardWeapon;
    bool mbFormatAsSeasonal;

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
