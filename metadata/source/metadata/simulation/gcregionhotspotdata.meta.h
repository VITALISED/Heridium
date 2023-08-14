#pragma once
#include "../../../../pch.h"

class cGcRegionHotspotData
{
public:
    static const unsigned __int64 muNameHash = 0x36E137A2EA118340;
    static const unsigned __int64 muTemplateHash = 0x2990BF8415EA9388;
    static const int miNumMembers = 6;

    float mfProbabilityWeighting;
    float mfMinRange;
    float mfMaxRange;
    cTkFixedArray<float, 4> maClassWeightings;
    cTkFixedArray<float, 4> maClassStrengths;
    float mfDiscoveryDistanceThreshold;

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
