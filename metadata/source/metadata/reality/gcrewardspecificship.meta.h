#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorylayout.meta.h"
#include "../../../../metadata/source/metadata/gamestate/gcinventorycontainer.meta.h"
#include "../../../../metadata/source/metadata/reality/gccurrency.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../metadata/source/metadata/reality/gcinventorylayoutsizetype.meta.h"

class cGcRewardSpecificShip
{
public:
    static const unsigned __int64 muNameHash = 0x977CF58471E48CD1;
    static const unsigned __int64 muTemplateHash = 0x9CAEDE34EE21604C;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
