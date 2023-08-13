#pragma once

#include "../../../../../../pch.h"
enum eSprintingCostDifficulty
{
    ESprintingCostDifficulty_Free = 0,
    ESprintingCostDifficulty_Low = 1,
    ESprintingCostDifficulty_Full = 2,
};

class cGcSprintingCostDifficultyOption
{
    static const unsigned __int64 muNameHash = 9341450929791858878;
    static const unsigned __int64 muTemplateHash = 12883776129052375584;
    static const int miNumMembers = 1;

    eSprintingCostDifficulty meSprintingCostDifficulty;

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
