#include "gcexpeditiondifficultykeyframe.meta.h"

void cGcExpeditionDifficultyKeyframe::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26601360);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExpeditionDifficultyKeyframe::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603888);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExpeditionDifficultyKeyframe::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

