#pragma once
#include "../../../../pch.h"

enum eLaunchFuelCostDifficulty
{
    ELaunchFuelCostDifficulty_Free = 0,
    ELaunchFuelCostDifficulty_Low = 1,
    ELaunchFuelCostDifficulty_Normal = 2,
    ELaunchFuelCostDifficulty_High = 3,
};

class cGcLaunchFuelCostDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0xB8138F7D4F230C2B;
    static const unsigned __int64 muTemplateHash = 0x6DA718B3683C3F52;
    static const int miNumMembers = 1;

    eLaunchFuelCostDifficulty meLaunchFuelCostDifficulty;

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
