#pragma once
#include "../../../../../../../../pch.h"

enum ePlanetSize
{
    EPlanetSize_Large = 0,
    EPlanetSize_Medium = 1,
    EPlanetSize_Small = 2,
    EPlanetSize_Moon = 3,
};

class cGcPlanetSize
{
    static const unsigned __int64 muNameHash = 0xE198F55796BC6E2F;
    static const unsigned __int64 muTemplateHash = 0xF0DADAF6E563CFD9;
    static const int miNumMembers = 1;

    ePlanetSize mePlanetSize;

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
