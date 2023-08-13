#include "gcpersistentterrainedits.meta.h"

void cGcPersistentTerrainEdits::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33118400);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentTerrainEdits::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33122896);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistentTerrainEdits::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33124176);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

