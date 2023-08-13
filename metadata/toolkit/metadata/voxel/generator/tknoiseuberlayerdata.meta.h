#pragma once
#include "../../../../../../../pch.h"

class cTkNoiseUberData;
class cTkNoiseVoxelTypeEnum;
class cTkNoiseOffsetEnum;

enum eWaterFade
{
    EWaterFade_None = 0,
    EWaterFade_Above = 1,
    EWaterFade_Below = 2,
};

class cTkNoiseUberLayerData
{
    static const unsigned __int64 muNameHash = 0x174C8C3DB33CE268;
    static const unsigned __int64 muTemplateHash = 0x3F104057D08F304F;
    static const int miNumMembers = 19;

    cTkNoiseUberData mNoiseData;
    bool mbActive;
    int miMaximumLOD;
    bool mbSubtract;
    cTkNoiseVoxelTypeEnum mVoxelType;
    float mfHeight;
    float mfWidth;
    float mfRegionRatio;
    float mfRegionScale;
    float mfRegionGain;
    float mfSmoothRadius;
    float mfHeightOffset;
    cTkNoiseOffsetEnum mOffset;
    eWaterFade meWaterFade;
    float mfPlateauStratas;
    int miPlateauSharpness;
    float mfPlateauRegionSize;
    int miSeedOffset;
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
