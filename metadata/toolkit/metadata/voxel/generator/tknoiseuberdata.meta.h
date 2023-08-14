#pragma once
#include "../../../../../pch.h"

enum eDebugNoiseType
{
    EDebugNoiseType_Plane = 0,
    EDebugNoiseType_Check = 1,
    EDebugNoiseType_Sine = 2,
    EDebugNoiseType_Uber = 3,
};

class cTkNoiseUberData
{
public:
    static const unsigned __int64 muNameHash = 0xA720068E4459862;
    static const unsigned __int64 muTemplateHash = 0x8ABC1ABB8765470E;
    static const int miNumMembers = 16;

    int miOctaves;
    float mfSlopeGain;
    float mfSlopeBias;
    float mfSharpToRoundFeatures;
    float mfAmplifyFeatures;
    float mfPerturbFeatures;
    float mfAltitudeErosion;
    float mfRidgeErosion;
    float mfSlopeErosion;
    float mfLacunarity;
    float mfGain;
    float mfRemapFromMin;
    float mfRemapFromMax;
    float mfRemapToMin;
    float mfRemapToMax;
    eDebugNoiseType meDebugNoiseType;

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
