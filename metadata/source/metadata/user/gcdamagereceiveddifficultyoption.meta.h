#pragma once

#include "../../../../../../pch.h"
enum eDamageReceivedDifficulty
{
    EDamageReceivedDifficulty_None = 0,
    EDamageReceivedDifficulty_Low = 1,
    EDamageReceivedDifficulty_Normal = 2,
    EDamageReceivedDifficulty_High = 3,
};

class cGcDamageReceivedDifficultyOption
{
    static const unsigned __int64 muNameHash = 10404934717293622707;
    static const unsigned __int64 muTemplateHash = 908205855534260987;
    static const int miNumMembers = 1;

    eDamageReceivedDifficulty meDamageReceivedDifficulty;

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
