#pragma once
#include "../../../../pch.h"

enum eCatalogueGroup
{
    ECatalogueGroup_MaterialsAndItems = 0,
    ECatalogueGroup_CraftingAndTechnology = 1,
    ECatalogueGroup_Buildables = 2,
    ECatalogueGroup_Recipes = 3,
    ECatalogueGroup_Wonders = 4,
};

class cGcCatalogueGroups
{
public:
    static const unsigned __int64 muNameHash = 0x9A93F045019746C1;
    static const unsigned __int64 muTemplateHash = 0x261CB4A6885077DC;
    static const int miNumMembers = 1;

    eCatalogueGroup meCatalogueGroup;

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
