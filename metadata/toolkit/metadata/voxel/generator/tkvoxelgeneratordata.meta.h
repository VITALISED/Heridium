#pragma once

#include "../../../../../../../pch.h"
class cTkNoiseVoxelTypeEnum;
class cTkNoiseVoxelTypeEnum;

class cTkVoxelGeneratorData
{
    static const unsigned __int64 muNameHash = 8805789778211848341;
    static const unsigned __int64 muTemplateHash = 3837628485798644599;
    static const int miNumMembers = 17;

    cTkSeed mBaseSeed;
    float mfSeaLevel;
    float mfBeachHeight;
    float mfNoSeaBaseLevel;
    cTkNoiseVoxelTypeEnum mBuildingVoxelType;
    cTkNoiseVoxelTypeEnum mResourceVoxelType;
    cTkFixedArray<cTkNoiseUberLayerData> maNoiseLayers;
    cTkFixedArray<cTkNoiseGridData> maGridLayers;
    cTkFixedArray<cTkNoiseFeatureData> maFeatures;
    cTkFixedArray<cTkNoiseCaveData> maCaves;
    float mfMinimumCaveDepth;
    float mfCaveRoofSmoothingDist;
    float mfMaximumSeaLevelCaveDepth;
    float mfBuildingTextureRadius;
    float mfBuildingSmoothingRadius;
    float mfBuildingSmoothingHeight;
    float mfWaterFadeInDistance;

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