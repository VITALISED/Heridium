#include "gcobjectspawndataarray.meta.h"

void cGcObjectSpawnDataArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27233696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcObjectSpawnDataArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27235968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcObjectSpawnDataArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

