#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrealitysubstancecategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrarity.meta.h"
#include "../../../../metadata/source/metadata/reality/gclegality.meta.h"
#include "../../../../metadata/source/metadata/reality/gcitempricemodifiers.meta.h"
#include "../../../../metadata/source/metadata/reality/gctradecategory.meta.h"

class cGcRealitySubstanceData
{
public:
    static const unsigned __int64 muNameHash = 0xD811F4C9E014843E;
    static const unsigned __int64 muTemplateHash = 0x68D2368BE2F08CB5;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
