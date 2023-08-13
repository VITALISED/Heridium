#pragma once
#include "../../../../../../pch.h"

enum eTrophy
{
    ETrophy_None = -1,
    ETrophy_Trophy0 = 0,
    ETrophy_Trophy1 = 1,
    ETrophy_Trophy2 = 2,
    ETrophy_Trophy3 = 3,
    ETrophy_Trophy4 = 4,
};

class cTkTrophyEnum
{
    static const unsigned __int64 muNameHash = 0xF50D34444AC02C1E;
    static const unsigned __int64 muTemplateHash = 0xDCDC4D1713C4B17A;
    static const int miNumMembers = 1;

    eTrophy meTrophy;

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
