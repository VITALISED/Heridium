#pragma once

#include "../../../../../../pch.h"
enum eDifficultyOptionGroup
{
    EDifficultyOptionGroup_Survival = 0,
    EDifficultyOptionGroup_Crafting = 1,
    EDifficultyOptionGroup_Combat = 2,
    EDifficultyOptionGroup_Ease = 3,
};

class cGcDifficultyOptionGroups
{
    static const unsigned __int64 muNameHash = 5240747260058925177;
    static const unsigned __int64 muTemplateHash = 10332915724681293708;
    static const int miNumMembers = 1;

    eDifficultyOptionGroup meDifficultyOptionGroup;

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
