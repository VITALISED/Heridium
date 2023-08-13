#include "gcexpeditiondebriefpunctuation.meta.h"

void cGcExpeditionDebriefPunctuation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26601072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcExpeditionDebriefPunctuation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26603808);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcExpeditionDebriefPunctuation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26604624);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

