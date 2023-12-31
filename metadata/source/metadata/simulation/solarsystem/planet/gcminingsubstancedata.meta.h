#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcrealitysubstancecategory.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcrarity.meta.h"

class cGcMiningSubstanceData
{
public:
    static const unsigned __int64 muNameHash = 0x4FA3A2D9F8D4A156;
    static const unsigned __int64 muTemplateHash = 0xAD1BE90CC526B2B9;
    static const int miNumMembers = 3;

    cGcRealitySubstanceCategory mSubstanceCategory;
    bool mbUseRarity;
    cGcRarity mRarity;

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
