#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrealitysubstancecategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gcproductcategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrarity.meta.h"
#include "../../../../metadata/source/metadata/reality/gclegality.meta.h"
#include "../../../../metadata/source/metadata/reality/gctechnologyrequirement.meta.h"
#include "../../../../metadata/source/metadata/reality/gcitempricemodifiers.meta.h"
#include "../../../../metadata/source/metadata/reality/gctradecategory.meta.h"

enum eWikiCategory
{
    EWikiCategory_NotEnabled = 0,
    EWikiCategory_Crafting = 1,
    EWikiCategory_Tech = 2,
    EWikiCategory_Construction = 3,
    EWikiCategory_Trade = 4,
    EWikiCategory_Curio = 5,
    EWikiCategory_Cooking = 6,
};

class cGcProductData
{
public:
    static const unsigned __int64 muNameHash = 0xE831C8A241FD8276;
    static const unsigned __int64 muTemplateHash = 0xC8BD0ABA9E49767F;
    static const int miNumMembers = 44;

    TkID<128> mID;
    cTkFixedString<128,char> macName;
    cTkFixedString<128,char> macNameLower;
    cTkDynamicString macSubtitle;
    cTkDynamicString macDescription;
    TkID<256> mHint;
    TkID<128> mGroupID;
    cTkModelResource mDebrisFile;
    int miBaseValue;
    int miLevel;
    cTkTextureResource mIcon;
    cTkTextureResource mHeroIcon;
    cTkColour mColour;
    cGcRealitySubstanceCategory mCategory;
    cGcProductCategory mType;
    cGcRarity mRarity;
    cGcLegality mLegality;
    bool mbConsumable;
    int miChargeValue;
    int miStackMultiplier;
    int miDefaultCraftAmount;
    int miCraftAmountStepSize;
    int miCraftAmountMultiplier;
    cTkDynamicArray<cGcTechnologyRequirement> maRequirements;
    cTkDynamicArray<cGcTechnologyRequirement> maAltRequirements;
    cGcItemPriceModifiers mCost;
    int miRecipeCost;
    bool mbSpecificChargeOnly;
    float mfNormalisedValueOnWorld;
    float mfNormalisedValueOffWorld;
    cGcTradeCategory mTradeCategory;
    eWikiCategory meWikiCategory;
    bool mbIsCraftable;
    TkID<128> mDeploysInto;
    float mfEconomyInfluenceMultiplier;
    TkID<256> mPinObjective;
    TkID<256> mPinObjectiveTip;
    bool mbCookingIngredient;
    float mfCookingValue;
    bool mbGoodForSelling;
    TkID<128> mGiveRewardOnSpecialPurchase;
    bool mbEggModifierIngredient;
    bool mbIsTechbox;
    bool mbCanSendToOtherPlayers;

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
