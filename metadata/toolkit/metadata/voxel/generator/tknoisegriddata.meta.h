#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisevoxeltypeenum.meta.h"

enum eNoiseGridType
{
    ENoiseGridType_Cube = 0,
    ENoiseGridType_Cone = 1,
    ENoiseGridType_Torus = 2,
    ENoiseGridType_Sphere = 3,
    ENoiseGridType_Cylinder = 4,
    ENoiseGridType_Capsule = 5,
    ENoiseGridType_Corridor = 6,
    ENoiseGridType_Pipe = 7,
    ENoiseGridType_Puck = 8,
    ENoiseGridType_SuperPrimitiveRandom = 9,
    ENoiseGridType_SuperFormula_01 = 10,
    ENoiseGridType_SuperFormula_02 = 11,
    ENoiseGridType_SuperFormula_03 = 12,
    ENoiseGridType_SuperFormula_04 = 13,
    ENoiseGridType_SuperFormula_05 = 14,
    ENoiseGridType_SuperFormula_06 = 15,
    ENoiseGridType_SuperFormula_07 = 16,
    ENoiseGridType_SuperFormula_08 = 17,
    ENoiseGridType_SuperFormulaRandom = 18,
    ENoiseGridType_SuperFormula = 19,
    ENoiseGridType_SuperPrimitive = 20,
    ENoiseGridType_File = 21,
};
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoiseoffsetenum.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoiseuberlayerdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisesuperformuladata.meta.h"
#include "../../../../../metadata/toolkit/metadata/voxel/generator/tknoisesuperprimitivedata.meta.h"

class cTkNoiseGridData
{
public:
    static const unsigned __int64 muNameHash = 0xA45052EB66E281C7;
    static const unsigned __int64 muTemplateHash = 0x4C8832CFE3785F00;
    static const int miNumMembers = 32;

    bool mbActive;
    int miMaximumLOD;
    bool mbSubtract;
    bool mbSwapZY;
    bool mbHemisphere;
    cTkNoiseVoxelTypeEnum mVoxelType;
    eNoiseGridType meNoiseGridType;
    cTkFixedString<128,char> macFilename;
    float mfMinWidth;
    float mfMaxWidth;
    float mfMinHeight;
    float mfMaxHeight;
    float mfMinHeightOffset;
    float mfMaxHeightOffset;
    float mfHeightOffset;
    cTkNoiseOffsetEnum mOffset;
    float mfRegionRatio;
    float mfRegionScale;
    cTkNoiseUberLayerData mTurbulenceNoiseLayer;
    float mfYaw;
    float mfPitch;
    float mfRoll;
    float mfVaryYaw;
    float mfVaryPitch;
    float mfVaryRoll;
    float mfSmoothRadius;
    int miSeedOffset;
    float mfRandomPrimitive;
    cTkNoiseSuperFormulaData mSuperFormula1;
    cTkNoiseSuperFormulaData mSuperFormula2;
    cTkNoiseSuperPrimitiveData mSuperPrimitive;
    float mfTileBlendMeters;

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
