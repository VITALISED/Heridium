#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcrealitysubstancecraftingmix.meta.h"

class cGcRealityCraftingRecipeData
{
public:
    static const unsigned __int64 muNameHash = 0x5CEC8CD158852BFE;
    static const unsigned __int64 muTemplateHash = 0x90B4295D3193C0CF;
    static const int miNumMembers = 2;

    cTkFixedArray<cGcRealitySubstanceCraftingMix, 3> maInputs;
    TkID<128> mOutputID;

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
