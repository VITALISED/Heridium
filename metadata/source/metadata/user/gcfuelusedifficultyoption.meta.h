#pragma once

#include "../../../../../../pch.h"
enum eFuelUseDifficulty
{
    EFuelUseDifficulty_Free = 0,
    EFuelUseDifficulty_Cheap = 1,
    EFuelUseDifficulty_Normal = 2,
    EFuelUseDifficulty_Expensive = 3,
};

class cGcFuelUseDifficultyOption
{
    static const unsigned __int64 muNameHash = 10523260150112715234;
    static const unsigned __int64 muTemplateHash = 1650161322316213158;
    static const int miNumMembers = 1;

    eFuelUseDifficulty meFuelUseDifficulty;

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