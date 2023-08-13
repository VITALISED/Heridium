#include "gcsyncbuffersavedataarray.meta.h"

void cGcSyncBufferSaveDataArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33225040);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSyncBufferSaveDataArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229392);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSyncBufferSaveDataArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230608);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

