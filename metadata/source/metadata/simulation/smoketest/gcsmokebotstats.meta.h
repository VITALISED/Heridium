#pragma once
#include "../../../../../../../pch.h"

class cGcSmokeBotStats
{
    static const unsigned __int64 muNameHash = 0xBF03A94511E0F7B0;
    static const unsigned __int64 muTemplateHash = 0x44CC0793E9653419;
    static const int miNumMembers = 16;

    float mfAvgCpuFPS;
    float mfMinCpuFPS;
    float mfMaxCpuFPS;
    cTkVector mMinCpuFPSPos;
    cTkVector mMinCpuFPSFacing;
    float mfAvgGpuFPS;
    float mfMinGpuFPS;
    float mfMaxGpuFPS;
    cTkVector mMinGpuFPSPos;
    cTkVector mMinGpuFPSFacing;
    float mfMinMemory;
    cTkVector mMinMemoryPos;
    cTkVector mMinMemoryFacing;
    float mfTotalCpuFps;
    float mfTotalGpuFps;
    int miFrameCount;

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
