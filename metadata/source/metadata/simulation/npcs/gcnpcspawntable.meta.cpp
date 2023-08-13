#include "gcnpcspawntable.meta.h"

void cGcNPCSpawnTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24844048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSpawnTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSpawnTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

