#pragma once
#include "../../../../../pch.h"

enum eBlendOperation
{
    EBlendOperation_Blend = 0,
    EBlendOperation_Add = 1,
};
#include "../../../../../metadata/toolkit/metadata/animation/blendtree/tkanimvectorblendnodedata.meta.h"

class cTkAnimVectorBlendNode
{
public:
    static const unsigned __int64 muNameHash = 0xCEE7FEFDA2096939;
    static const unsigned __int64 muTemplateHash = 0xB4535ED711FA64FF;
    static const int miNumMembers = 2;

    eBlendOperation meBlendOperation;
    cTkDynamicArray<cTkAnimVectorBlendNodeData> maBlendChildren;

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
