#pragma once

#include "../../../../../../pch.h"
enum eUnlockableItemTree
{
    EUnlockableItemTree_Test = 0,
    EUnlockableItemTree_BasicBaseParts = 1,
    EUnlockableItemTree_BasicTechParts = 2,
    EUnlockableItemTree_BaseParts = 3,
    EUnlockableItemTree_SpecialBaseParts = 4,
    EUnlockableItemTree_SuitTech = 5,
    EUnlockableItemTree_ShipTech = 6,
    EUnlockableItemTree_WeapTech = 7,
    EUnlockableItemTree_ExocraftTech = 8,
    EUnlockableItemTree_CraftProducts = 9,
    EUnlockableItemTree_FreighterTech = 10,
    EUnlockableItemTree_S9BaseParts = 11,
    EUnlockableItemTree_S9ExoTech = 12,
    EUnlockableItemTree_S9ShipTech = 13,
};

class cGcUnlockableItemTreeGroups
{
    static const unsigned __int64 muNameHash = 10328357439684243625;
    static const unsigned __int64 muTemplateHash = 5221463868809452211;
    static const int miNumMembers = 1;

    eUnlockableItemTree meUnlockableItemTree;

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
