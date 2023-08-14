#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisevoxeltypeenum.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoiseuberlayerdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisegriddata.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisefeaturedata.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisecavedata.meta.h"

class cTkVoxelGeneratorData
{
public:
    static const unsigned __int64 muNameHash = 0x7A347325F1154095;
    static const unsigned __int64 muTemplateHash = 0x3541FEC673F2CB77;
    static const int miNumMembers = 17;

    cTkSeed mBaseSeed;
    float mfSeaLevel;
    float mfBeachHeight;
    float mfNoSeaBaseLevel;
    cTkNoiseVoxelTypeEnum mBuildingVoxelType;
    cTkNoiseVoxelTypeEnum mResourceVoxelType;
    cTkFixedArray<cTkNoiseUberLayerData, 8> maNoiseLayers;
    cTkFixedArray<cTkNoiseGridData, 9> maGridLayers;
    cTkFixedArray<cTkNoiseFeatureData, 7> maFeatures;
    cTkFixedArray<cTkNoiseCaveData, 1> maCaves;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
