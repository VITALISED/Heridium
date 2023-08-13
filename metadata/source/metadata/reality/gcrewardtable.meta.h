#pragma once
#include "pch.h"

class cGcRewardTable
{
public:
    static const unsigned __int64 muNameHash = 0x2ECD4E3663FDB26F;
    static const unsigned __int64 muTemplateHash = 0xCF9D3230D28DA639;
    static const int miNumMembers = 28;

    cTkDynamicArray<cGcGenericRewardTableEntry1> maGenericTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maDestructionTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maInteractionTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maOldInteractionTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSpecialRewardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maMissionBoardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maFleetTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maWikiProgressTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maShipSalvageTable;
    cTkDynamicArray<cGcRewardTableEntitlementItem1> maEntitlementTable;
    cTkDynamicArray<cGcRewardTableEntry1> maTable;
    cTkDynamicArray<TkID<128>1> maTechRewardOrder;
    cTkDynamicArray<TkID<128>1> maProductRewardOrder;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maMixerRewardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maTwitchRewardTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maNPCPlanetSiteTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSettlementTable;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable1;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable2;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable3;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable4;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable5;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable6;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable7;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable8;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable9;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable10;
    cTkDynamicArray<cGcGenericRewardTableEntry1> maSeasonRewardTable11;

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
