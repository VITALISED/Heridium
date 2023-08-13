#include "gcpersistedstatdata.meta.h"

void cGcPersistedStatData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33785472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistedStatData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33789968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistedStatData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33791184);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

