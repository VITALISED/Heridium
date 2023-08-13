#pragma once

#include "../../../../../../pch.h"
enum eChargingRequirementsDifficulty
{
    EChargingRequirementsDifficulty_None = 0,
    EChargingRequirementsDifficulty_Low = 1,
    EChargingRequirementsDifficulty_Normal = 2,
    EChargingRequirementsDifficulty_High = 3,
};

class cGcChargingRequirementsDifficultyOption
{
    static const unsigned __int64 muNameHash = 6874577318783430634;
    static const unsigned __int64 muTemplateHash = 17964409312411223638;
    static const int miNumMembers = 1;

    eChargingRequirementsDifficulty meChargingRequirementsDifficulty;

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
