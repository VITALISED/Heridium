#pragma once

#include "../../../../../../../../pch.h"
enum eSentinelLevel
{
    ESentinelLevel_Low = 0,
    ESentinelLevel_Default = 1,
    ESentinelLevel_Aggressive = 2,
};

class cGcPlanetSentinelData
{
    static const unsigned __int64 muNameHash = 2212891044530047054;
    static const unsigned __int64 muTemplateHash = 7689225884869371551;
    static const int miNumMembers = 2;

    eSentinelLevel meSentinelLevel;
    int miMaxActiveDrones;

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
