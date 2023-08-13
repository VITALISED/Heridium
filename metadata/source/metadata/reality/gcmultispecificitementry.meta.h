#pragma once
#include "../../../../../../pch.h"

enum eMultiItemRewardType
{
    EMultiItemRewardType_Product = 0,
    EMultiItemRewardType_Substance = 1,
    EMultiItemRewardType_ProcTech = 2,
    EMultiItemRewardType_ProcProduct = 3,
    EMultiItemRewardType_InventorySlot = 4,
    EMultiItemRewardType_CommunityTierProduct = 5,
};
class cGcProceduralProductCategory;
class cGcRarity;

class cGcMultiSpecificItemEntry
{
    static const unsigned __int64 muNameHash = 0x7439D28A897F0ACC;
    static const unsigned __int64 muTemplateHash = 0xE83D9C2444D3380;
    static const int miNumMembers = 14;

    eMultiItemRewardType meMultiItemRewardType;
    TkID<128> mId;
    int miAmount;
    TkID<256> mProcTechGroup;
    int miProcTechQuality;
    bool mbIllegalProcTech;
    bool mbSentinelProcTech;
    bool mbAlsoTeachTechBoxRecipe;
    cGcProceduralProductCategory mProcProdType;
    cGcRarity mProcProdRarity;
    cTkDynamicArray<TkID<128> > maCommunityTierProductList;
    bool mbHideInSeasonRewards;
    TkID<128> mSeasonRewardListFormat;
    TkID<256> mCustomRewardLocID;

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
