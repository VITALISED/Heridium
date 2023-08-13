#pragma once
#include "pch.h"

enum eDeathConsequencesDifficulty
{
    EDeathConsequencesDifficulty_None = 0,
    EDeathConsequencesDifficulty_ItemGrave = 1,
    EDeathConsequencesDifficulty_DestroyItems = 2,
    EDeathConsequencesDifficulty_DestroySave = 3,
};

class cGcDeathConsequencesDifficultyOption
{
public:
    static const unsigned __int64 muNameHash = 0x369AA9FC9BDA7A5E;
    static const unsigned __int64 muTemplateHash = 0xE8CBB25AF0B05F86;
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
