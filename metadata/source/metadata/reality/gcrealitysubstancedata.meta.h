#pragma once

#include "../../../../../../pch.h"
class cTkTextureResource;
class cTkModelResource;
class cGcRealitySubstanceCategory;
class cGcRarity;
class cGcLegality;
class cGcItemPriceModifiers;
class cGcTradeCategory;

class cGcRealitySubstanceData
{
    static const unsigned __int64 muNameHash = 15569494534681560126;
    static const unsigned __int64 muTemplateHash = 7553159499489512629;
    static const int miNumMembers = 28;

    cTkFixedString<32,char> macName;
    cTkFixedString<32,char> macNameLower;
    TkID<128> mID;
    cTkFixedString<32,char> macSymbol;
    cTkTextureResource mIcon;
    cTkModelResource mDebrisFile;
    cTkDynamicString macSubtitle;
    cTkDynamicString macDescription;
    cTkColour mColour;
    cTkColour mWorldColour;
    int miBaseValue;
    cGcRealitySubstanceCategory mCategory;
    cGcRarity mRarity;
    cGcLegality mLegality;
    int miChargeValue;
    int miStackMultiplier;
    cGcItemPriceModifiers mCost;
    float mfNormalisedValueOnWorld;
    float mfNormalisedValueOffWorld;
    cGcTradeCategory mTradeCategory;
    bool mbWikiEnabled;
    float mfEconomyInfluenceMultiplier;
    TkID<256> mPinObjective;
    TkID<256> mPinObjectiveTip;
    TkID<128> mWikiMissionID;
    bool mbCookingIngredient;
    bool mbGoodForSelling;
    bool mbEggModifierIngredient;

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
