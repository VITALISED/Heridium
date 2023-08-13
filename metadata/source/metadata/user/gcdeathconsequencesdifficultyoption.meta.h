#pragma once

#include "../../../../../../pch.h"
enum eDeathConsequencesDifficulty
{
    EDeathConsequencesDifficulty_None = 0,
    EDeathConsequencesDifficulty_ItemGrave = 1,
    EDeathConsequencesDifficulty_DestroyItems = 2,
    EDeathConsequencesDifficulty_DestroySave = 3,
};

class cGcDeathConsequencesDifficultyOption
{
    static const unsigned __int64 muNameHash = 3934644126873188958;
    static const unsigned __int64 muTemplateHash = 16774697340726435718;
    static const int miNumMembers = 1;

    eDeathConsequencesDifficulty meDeathConsequencesDifficulty;

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
