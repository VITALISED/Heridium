#include "gcsyncbuffersavedata.meta.h"

void cGcSyncBufferSaveData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33224768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSyncBufferSaveData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSyncBufferSaveData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

