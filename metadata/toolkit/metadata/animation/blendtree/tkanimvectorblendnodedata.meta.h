#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"

class cTkAnimVectorBlendNodeData
{
public:
    static const unsigned __int64 muNameHash = 0x541BE758514502E3;
    static const unsigned __int64 muTemplateHash = 0x9113B80EAEF3248A;
    static const int miNumMembers = 8;

    TkID<128> mNodeId;
    cTkFixedString<64,char> macWeightIn;
    float mfWeightRangeBegin;
    float mfWeightRangeEnd;
    float mfWeightSpringTime;
    cTkCurveType mWeightCurve;
    float mfInitialWeight;
    cTkClassPointer mBlendChild;

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
