#pragma once
#include "../../../../../pch.h"

class cGcSmokeBotStats
{
public:
    static const unsigned __int64 muNameHash = 0xBF03A94511E0F7B0;
    static const unsigned __int64 muTemplateHash = 0x44CC0793E9653419;
    static const int miNumMembers = 16;

    float mfAvgCpuFPS;
    float mfMinCpuFPS;
    float mfMaxCpuFPS;
    cTkVector3 mMinCpuFPSPos;
    cTkVector3 mMinCpuFPSFacing;
    float mfAvgGpuFPS;
    float mfMinGpuFPS;
    float mfMaxGpuFPS;
    cTkVector3 mMinGpuFPSPos;
    cTkVector3 mMinGpuFPSFacing;
    float mfMinMemory;
    cTkVector3 mMinMemoryPos;
    cTkVector3 mMinMemoryFacing;
    float mfTotalCpuFps;
    float mfTotalGpuFps;
    int miFrameCount;

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
