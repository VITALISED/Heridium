#pragma once

#include "../../../../../../pch.h"
class cGcResourceElement;
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcCurrency;
class cGcSpaceshipClasses;
class cGcInventoryLayoutSizeType;

class cGcRewardSpecificShip
{
    static const unsigned __int64 muNameHash = 10915869546034531537;
    static const unsigned __int64 muTemplateHash = 11290205634779242572;
    static const int miNumMembers = 12;

    cGcResourceElement mShipResource;
    cGcInventoryLayout mShipLayout;
    cGcInventoryContainer mShipInventory;
    int miCostAmount;
    cGcCurrency mCostCurrency;
    cGcSpaceshipClasses mShipType;
    bool mbUseOverrideSizeType;
    cGcInventoryLayoutSizeType mOverrideSizeType;
    TkID<256> mNameOverride;
    bool mbIsGift;
    bool mbIsRewardShip;
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
