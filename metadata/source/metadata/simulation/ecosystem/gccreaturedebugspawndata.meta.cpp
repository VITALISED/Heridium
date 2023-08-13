#include "gccreaturedebugspawndata.meta.h"

void cGcCreatureDebugSpawnData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27663856);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureDebugSpawnData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27669136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureDebugSpawnData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

