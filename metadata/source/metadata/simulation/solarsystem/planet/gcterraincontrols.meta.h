#pragma once

#include "../../../../../../../../pch.h"
class cGcTerrainControls
{
    static const unsigned __int64 muNameHash = 192855512144768674;
    static const unsigned __int64 muTemplateHash = 7963093247902813288;
    static const int miNumMembers = 9;

    cTkFixedArray<float> maNoiseLayers;
    cTkFixedArray<float> maGridLayers;
    cTkFixedArray<float> maFeatures;
    cTkFixedArray<float> maCaves;
    float mfWaterActiveFrequency;
    float mfHighWaterActiveFrequency;
    float mfRockTileFrequency;
    float mfSubstanceTileFrequency;
    bool mbForceContinentalNoise;

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
