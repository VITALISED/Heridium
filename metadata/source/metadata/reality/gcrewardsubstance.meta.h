#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcrealitysubstancecategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrarity.meta.h"

class cGcRewardSubstance
{
public:
    static const unsigned __int64 muNameHash = 0x3DDFD92393C0D347;
    static const unsigned __int64 muTemplateHash = 0x14FFC7609444086C;
    static const int miNumMembers = 8;

    cGcRealitySubstanceCategory mItemCatagory;
    cGcRarity mItemRarity;
    int miItemLevel;
    int miAmountMin;
    int miAmountMax;
    bool mbDisableMultiplier;
    bool mbRewardAsBlobs;
    bool mbUseFuelMultiplier;

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
