#pragma once

#include "../../../../../../pch.h"
class cGcRewardTable
{
    static const unsigned __int64 muNameHash = 3372437691483140719;
    static const unsigned __int64 muTemplateHash = 14960168722466973241;
    static const int miNumMembers = 28;

    cTkDynamicArray<cGcGenericRewardTableEntry> maGenericTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maDestructionTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maInteractionTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maOldInteractionTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSpecialRewardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maMissionBoardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maFleetTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maWikiProgressTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maShipSalvageTable;
    cTkDynamicArray<cGcRewardTableEntitlementItem> maEntitlementTable;
    cTkDynamicArray<cGcRewardTableEntry> maTable;
    cTkDynamicArray<TkID<128> > maTechRewardOrder;
    cTkDynamicArray<TkID<128> > maProductRewardOrder;
    cTkDynamicArray<cGcGenericRewardTableEntry> maMixerRewardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maTwitchRewardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maNPCPlanetSiteTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSettlementTable;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable1;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable2;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable3;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable4;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable5;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable6;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable7;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable8;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable9;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable10;
    cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable11;

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
