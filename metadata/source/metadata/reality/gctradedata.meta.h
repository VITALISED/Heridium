#pragma once

#include "../../../../../../pch.h"
class cGcTradeData
{
    static const unsigned __int64 muNameHash = 7420506872262586727;
    static const unsigned __int64 muTemplateHash = 7460390270058304538;
    static const int miNumMembers = 19;

    cTkDynamicArray<TkID<128> > maAlwaysPresentProducts;
    cTkDynamicArray<TkID<128> > maAlwaysPresentSubstances;
    cTkDynamicArray<TkID<128> > maOptionalProducts;
    cTkDynamicArray<TkID<128> > maOptionalSubstances;
    int miMinItemsForSale;
    int miMaxItemsForSale;
    float mfPercentageOfItemsAreProducts;
    float mfBuyPriceIncreaseRedThreshold;
    float mfBuyPriceDecreaseGreenThreshold;
    float mfSellPriceIncreaseGreenThreshold;
    float mfSellPriceDecreaseRedThreshold;
    bool mbShowSeasonRewards;
    cTkFixedArray<int> maMinAmountOfProductAvailable;
    cTkFixedArray<int> maMaxAmountOfProductAvailable;
    cTkFixedArray<int> maMinAmountOfSubstanceAvailable;
    cTkFixedArray<int> maMaxAmountOfSubstanceAvailable;
    cTkFixedArray<int> maMinExtraSystemProducts;
    cTkFixedArray<int> maMaxExtraSystemProducts;
    cTkFixedArray<float> maTradeProductsPriceImprovements;

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
