#include "gcdungeonquestparams.meta.h"

void cGcDungeonQuestParams::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26600160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDungeonQuestParams::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDungeonQuestParams::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604480);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

