#pragma once

#include "../../../../../../pch.h"
class cTkModelResource;
class cTkTextureResource;
class cTkTextureResource;
class cGcRealitySubstanceCategory;
class cGcProductCategory;
class cGcRarity;
class cGcLegality;
class cGcItemPriceModifiers;
class cGcTradeCategory;

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
    static const unsigned __int64 muNameHash = 16731374689875493494;
    static const unsigned __int64 muTemplateHash = 14464729374819710591;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
