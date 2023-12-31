#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrealitysubstancecategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gctechnologycategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gctechnologyrarity.meta.h"
#include "../../../../metadata/source/metadata/reality/gctechnologyrequirement.meta.h"
#include "../../../../metadata/source/metadata/reality/stats/gcstatstypes.meta.h"
#include "../../../../metadata/source/metadata/reality/stats/gcstatsbonus.meta.h"
#include "../../../../metadata/source/metadata/reality/gcitempricemodifiers.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcTechnology
{
public:
    static const unsigned __int64 muNameHash = 0x9F1CE8466638E767;
    static const unsigned __int64 muTemplateHash = 0x7DCC8C19A5C03C43;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
