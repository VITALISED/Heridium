#pragma once
#include "pch.h"

class cTkEngineSettingsMapping
{
public:
    static const unsigned __int64 muNameHash = 0xC02F1D19584B44D;
    static const unsigned __int64 muTemplateHash = 0x32F9FD324E2BDA4C;
    static const int miNumMembers = 7;

    cTkFixedArray<float, 4> maShadowMultiplier;
    cTkFixedArray<float, 4> maReflectionMultiplier;
    cTkFixedArray<float, 4> maReflectionProbesMultiplier;
    cTkFixedArray<float, 4> maIKFullBodyIterations;
    cTkFixedArray<float, 4> maCloudsResolutionScale;
    cTkFixedArray<int, 4> maCloudsMaxIterations;
    cTkFixedArray<bool, 50> maNeedsGameRestart;

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
