#pragma once
#include "pch.h"

enum eCoverageType
{
    ECoverageType_Total = 0,
    ECoverageType_SmoothPatch = 1,
    ECoverageType_GridPatch = 2,
};

class cGcSpawnDensity
{
public:
    static const unsigned __int64 muNameHash = 0x36320600C6ADE7CA;
    static const unsigned __int64 muTemplateHash = 0x792F15FD68FA96F3;
    static const int miNumMembers = 5;

    TkID<128> mName;
    bool mbActive;
    eCoverageType meCoverageType;
    float mfPatchSize;
    float mfRegionScale;

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
