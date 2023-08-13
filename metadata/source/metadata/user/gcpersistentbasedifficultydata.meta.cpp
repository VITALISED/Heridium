#include "gcpersistentbasedifficultydata.meta.h"

void cGcPersistentBaseDifficultyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22721504);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentBaseDifficultyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22726304);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistentBaseDifficultyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22727280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

