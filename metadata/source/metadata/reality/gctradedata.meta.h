#pragma once
#include "pch.h"

class cGcTradeData
{
public:
    static const unsigned __int64 muNameHash = 0x66FAEFAF4E8E7167;
    static const unsigned __int64 muTemplateHash = 0x6788A16C7C9B141A;
    static const int miNumMembers = 19;

    cTkDynamicArray<TkID<128>1> maAlwaysPresentProducts;
    cTkDynamicArray<TkID<128>1> maAlwaysPresentSubstances;
    cTkDynamicArray<TkID<128>1> maOptionalProducts;
    cTkDynamicArray<TkID<128>1> maOptionalSubstances;
    int miMinItemsForSale;
    int miMaxItemsForSale;
    float mfPercentageOfItemsAreProducts;
    float mfBuyPriceIncreaseRedThreshold;
    float mfBuyPriceDecreaseGreenThreshold;
    float mfSellPriceIncreaseGreenThreshold;
    float mfSellPriceDecreaseRedThreshold;
    bool mbShowSeasonRewards;
    cTkFixedArray<int, 4> maMinAmountOfProductAvailable;
    cTkFixedArray<int, 4> maMaxAmountOfProductAvailable;
    cTkFixedArray<int, 4> maMinAmountOfSubstanceAvailable;
    cTkFixedArray<int, 4> maMaxAmountOfSubstanceAvailable;
    cTkFixedArray<int, 4> maMinExtraSystemProducts;
    cTkFixedArray<int, 4> maMaxExtraSystemProducts;
    cTkFixedArray<float, 4> maTradeProductsPriceImprovements;

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
