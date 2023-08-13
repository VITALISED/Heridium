#include "gcplayerspawnstatedata.meta.h"

void cGcPlayerSpawnStateData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33563776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerSpawnStateData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33569872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerSpawnStateData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33570032);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

