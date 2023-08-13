#pragma once

#include "../../../../../../pch.h"
class cTkTextureResource;
class cGcRealitySubstanceCategory;
class cGcTechnologyCategory;
class cGcTechnologyRarity;
class cGcStatsTypes;
class cGcItemPriceModifiers;
class cGcAlienRace;
class cGcTechnologyRarity;

class cGcTechnology
{
    static const unsigned __int64 muNameHash = 11465294140438800231;
    static const unsigned __int64 muTemplateHash = 9064774191772875843;
    static const int miNumMembers = 47;

    TkID<128> mID;
    TkID<256> mGroup;
    cTkFixedString<128,char> macName;
    cTkFixedString<128,char> macNameLower;
    cTkDynamicString macSubtitle;
    cTkDynamicString macDescription;
    bool mbTeach;
    TkID<256> mHintStart;
    TkID<256> mHintEnd;
    cTkTextureResource mIcon;
    cTkColour mColour;
    int miLevel;
    bool mbChargeable;
    int miChargeAmount;
    cGcRealitySubstanceCategory mChargeType;
    cTkDynamicArray<TkID<128> > maChargeBy;
    float mfChargeMultiplier;
    bool mbBuildFullyCharged;
    bool mbUsesAmmo;
    TkID<128> mAmmoId;
    bool mbPrimaryItem;
    bool mbUpgrade;
    bool mbCore;
    bool mbRepairTech;
    bool mbProcedural;
    cGcTechnologyCategory mCategory;
    cGcTechnologyRarity mRarity;
    float mfValue;
    cTkDynamicArray<cGcTechnologyRequirement> maRequirements;
    cGcStatsTypes mBaseStat;
    cTkDynamicArray<cGcStatsBonus> maStatBonuses;
    TkID<128> mRequiredTech;
    int miRequiredLevel;
    TkID<256> mFocusLocator;
    cTkColour mUpgradeColour;
    cTkColour mLinkColour;
    TkID<128> mRewardGroup;
    int miBaseValue;
    cGcItemPriceModifiers mCost;
    int miRequiredRank;
    cGcAlienRace mDispensingRace;
    int miFragmentCost;
    cGcTechnologyRarity mTechShopRarity;
    bool mbWikiEnabled;
    cTkDynamicString macDamagedDescription;
    TkID<128> mParentTechId;
    bool mbIsTemplate;

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
