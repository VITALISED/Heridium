#include "gcaispaceshippreloadlist.meta.h"

void cGcAISpaceshipPreloadList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23640768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAISpaceshipPreloadList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23644816);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAISpaceshipPreloadList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23645712);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

