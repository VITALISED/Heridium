#include "gcwikitopic.meta.h"

void cGcWikiTopic::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22631440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWikiTopic::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22633152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWikiTopic::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22634048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

