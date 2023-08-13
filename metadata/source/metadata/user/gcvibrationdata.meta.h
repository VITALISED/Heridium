#pragma once
#include "../../../../../../pch.h"

class cTkCurveType;

class cGcVibrationData
{
    static const unsigned __int64 muNameHash = 0x1C317C9CAD203EF4;
    static const unsigned __int64 muTemplateHash = 0xA8D7D8F0ECE4DB7B;
    static const int miNumMembers = 6;

    float mfOutputStrength;
    cTkCurveType mOutputStrengthCurve;
    float mfDecayTime;
    float mfVariance;
    float mfVarianceContrast;
    float mfSmoothTime;

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
