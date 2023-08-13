#include "gccostwordknowledge.meta.h"

void cGcCostWordKnowledge::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30580704);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostWordKnowledge::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30589280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostWordKnowledge::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30591248);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

