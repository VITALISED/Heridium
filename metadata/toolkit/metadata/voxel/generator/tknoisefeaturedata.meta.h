#pragma once
#include "../../../../../../../pch.h"

class cTkNoiseVoxelTypeEnum;

enum eFeatureType
{
    EFeatureType_Tube = 0,
    EFeatureType_Blob = 1,
};
class cTkNoiseOffsetEnum;

class cTkNoiseFeatureData
{
    static const unsigned __int64 muNameHash = 0xBC975A8E0D580FFA;
    static const unsigned __int64 muTemplateHash = 0x11FD8C247496B7E8;
    static const int miNumMembers = 18;

    bool mbActive;
    int miMaximumLOD;
    bool mbSubtract;
    bool mbTrench;
    cTkNoiseVoxelTypeEnum mVoxelType;
    eFeatureType meFeatureType;
    float mfWidth;
    float mfHeight;
    int miOctaves;
    float mfRegionSize;
    float mfRatio;
    float mfHeightVarianceAmplitude;
    float mfHeightVarianceFrequency;
    float mfHeightOffset;
    cTkNoiseOffsetEnum mOffset;
    float mfSmoothRadius;
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
