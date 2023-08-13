#include "gcspawnedobjectcomponentdata.meta.h"

void cGcSpawnedObjectComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34557088);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpawnedObjectComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpawnedObjectComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560672);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

