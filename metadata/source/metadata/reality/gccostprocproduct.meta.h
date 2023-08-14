#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcproceduralproductcategory.meta.h"
#include "../../../../metadata/source/metadata/reality/gcrarity.meta.h"

class cGcCostProcProduct
{
public:
    static const unsigned __int64 muNameHash = 0x2D9EAD5F5CF5EAF6;
    static const unsigned __int64 muTemplateHash = 0x3C8D0F7D4CC9EBCC;
    static const int miNumMembers = 4;

    cGcProceduralProductCategory mType;
    bool mbCareAboutRarity;
    cGcRarity mRarity;
    int miFreighterPasswordIndex;

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
