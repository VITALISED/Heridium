#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionproductenum.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcitemneedpurpose.meta.h"

class cGcMissionConditionHasProduct
{
public:
    static const unsigned __int64 muNameHash = 0x9537448E73030512;
    static const unsigned __int64 muTemplateHash = 0xAF0D07655CC416A5;
    static const int miNumMembers = 14;

    cGcDefaultMissionProductEnum mDefault;
    TkID<128> mProduct;
    int miAmount;
    bool mbSyncWithMissionFireteam;
    bool mbForceSearchFreighterAndChests;
    bool mbSearchEveryShip;
    bool mbSearchGrave;
    bool mbSearchCookingIngredients;
    bool mbTakeAmountFromSeasonData;
    bool mbDependentOnSeasonMilestone;
    TkID<128> mUseAmountToAffordRecipe;
    bool mbTakeAffordRecipeFromSeasonData;
    bool mbUseAffordRecipeForTextFormatting;
    cGcItemNeedPurpose mPurpose;

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
