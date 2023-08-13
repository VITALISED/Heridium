#pragma once

#include "../../../../../../../pch.h"
class cTkNoiseVoxelTypeEnum;

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
class cTkNoiseOffsetEnum;
class cTkNoiseUberLayerData;
class cTkNoiseSuperFormulaData;
class cTkNoiseSuperFormulaData;
class cTkNoiseSuperPrimitiveData;

class cTkNoiseGridData
{
    static const unsigned __int64 muNameHash = 11840054591353946567;
    static const unsigned __int64 muTemplateHash = 5514713612171108096;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};