#pragma once
#include "pch.h"

class cGcAlienPodComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x71B7896BF38DAAE4;
    static const unsigned __int64 muTemplateHash = 0x42BCABB3F2D44B9B;
    static const int miNumMembers = 17;

    float mfAgroRate;
    float mfAgroMovement;
    float mfAgroMovementRange;
    float mfAgroTorch;
    float mfAgroTorchRange;
    float mfAgroTorchFOV;
    float mfAgroThreshold;
    float mfAgroThresholdOffscreen;
    float mfAgroSpookValue;
    float mfAgroSpookTime;
    float mfAgroSpookTimeMin;
    float mfAgroSpookTimeMax;
    float mfGlowIntensityMin;
    float mfGlowIntensityMax;
    float mfInstaAgroDistance;
    float mfGunfireAgro;
    float mfGunfireAgroRange;

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
