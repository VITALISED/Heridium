#pragma once

#include "../../../../../../pch.h"
enum eWikiTopicType
{
    EWikiTopicType_Substances = 0,
    EWikiTopicType_CustomSubstanceList = 1,
    EWikiTopicType_Products = 2,
    EWikiTopicType_CustomProductList = 3,
    EWikiTopicType_CustomItemList = 4,
    EWikiTopicType_Technologies = 5,
    EWikiTopicType_CustomTechnologyList = 6,
    EWikiTopicType_BuildableTech = 7,
    EWikiTopicType_Construction = 8,
    EWikiTopicType_TradeCommodities = 9,
    EWikiTopicType_Curiosities = 10,
    EWikiTopicType_Cooking = 11,
    EWikiTopicType_StoneRunes = 12,
    EWikiTopicType_Words = 13,
    EWikiTopicType_RecipesAll = 14,
    EWikiTopicType_RecipesCooker = 15,
    EWikiTopicType_RecipesRefiner1 = 16,
    EWikiTopicType_RecipesRefiner2 = 17,
    EWikiTopicType_RecipesRefiner3 = 18,
    EWikiTopicType_Guide = 19,
    EWikiTopicType_Stories = 20,
    EWikiTopicType_TreasureWonders = 21,
    EWikiTopicType_WeirdBasePartWonders = 22,
    EWikiTopicType_PlanetWonders = 23,
    EWikiTopicType_CreatureWonders = 24,
    EWikiTopicType_FloraWonders = 25,
    EWikiTopicType_MineralWonders = 26,
    EWikiTopicType_CustomWonders = 27,
    EWikiTopicType_DebugSweep = 28,
};

class cGcWikiTopicType
{
    static const unsigned __int64 muNameHash = 8233594903897867423;
    static const unsigned __int64 muTemplateHash = 9941619139034995023;
    static const int miNumMembers = 1;

    eWikiTopicType meWikiTopicType;

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
