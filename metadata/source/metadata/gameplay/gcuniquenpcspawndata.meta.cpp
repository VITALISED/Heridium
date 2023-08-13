#include "gcuniquenpcspawndata.meta.h"

void cGcUniqueNPCSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34558096);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUniqueNPCSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34560080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUniqueNPCSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560912);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

