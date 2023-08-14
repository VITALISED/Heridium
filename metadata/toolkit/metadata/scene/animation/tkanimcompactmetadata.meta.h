#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/scene/animation/tkanimnodedata.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/animation/tkanimnodeframehalfdata.meta.h"

class cTkAnimCompactMetadata
{
public:
    static const unsigned __int64 muNameHash = 0x8D1F8DB67274D95A;
    static const unsigned __int64 muTemplateHash = 0x4BFF64F3341B71C2;
    static const int miNumMembers = 6;

    cTkDynamicArray<cTkAnimNodeData> maNodeData;
    cTkDynamicArray<cTkAnimNodeFrameHalfData> maAnimFrameData;
    cTkAnimNodeFrameHalfData mStillFrameData;
    int miFrameCount;
    int miNodeCount;
    bool mbHas30HzFrames;

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
