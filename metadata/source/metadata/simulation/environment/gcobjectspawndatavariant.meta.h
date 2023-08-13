#pragma once

#include "../../../../../../../pch.h"
class cGcObjectSpawnDataVariant
{
    static const unsigned __int64 muNameHash = 13103132471699101870;
    static const unsigned __int64 muTemplateHash = 3715418062592270357;
    static const int miNumMembers = 11;

    TkID<128> mID;
    float mfCoverage;
    float mfFlatDensity;
    float mfSlopeDensity;
    float mfSlopeMultiplier;
    int miMaxRegionRadius;
    int miMaxImposterRadius;
    float mfFadeOutStartDistance;
    float mfFadeOutEndDistance;
    float mfFadeOutOffsetDistance;
    cTkFixedArray<float> maLodDistances;

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
