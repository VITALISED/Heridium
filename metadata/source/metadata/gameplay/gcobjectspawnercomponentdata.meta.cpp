#include "gcobjectspawnercomponentdata.meta.h"

void cGcObjectSpawnerComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34656064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcObjectSpawnerComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34661456);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcObjectSpawnerComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34662720);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

