#pragma once
#include "../../../../../pch.h"

enum eNoiseType
{
    ENoiseType_Plane = 0,
    ENoiseType_Check = 1,
    ENoiseType_Sine = 2,
    ENoiseType_Smooth = 3,
    ENoiseType_Fractal = 4,
    ENoiseType_Ridged = 5,
    ENoiseType_Billow = 6,
    ENoiseType_Erosion = 7,
    ENoiseType_Volcanic = 8,
    ENoiseType_Glacial = 9,
    ENoiseType_Plateau = 10,
};

class cTkNoiseLayerData
{
public:
    static const unsigned __int64 muNameHash = 0x474596B01166F6A6;
    static const unsigned __int64 muTemplateHash = 0xC6E7F5301C2A5B2A;
    static const int miNumMembers = 15;

    bool mbActive;
    bool mbInvert;
    bool mbAbsolute;
    bool mbSubtract;
    eNoiseType meNoiseType;
    float mfHeight;
    float mfWidth;
    int miOctaves;
    float mfFrequencyScaleY;
    float mfRegionRatio;
    float mfRegionScale;
    float mfTurbulenceFrequency;
    float mfTurbulenceAmplitude;
    int miTurbulenceOctaves;
    int miSeedOffset;

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
