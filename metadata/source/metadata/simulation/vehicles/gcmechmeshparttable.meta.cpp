#include "gcmechmeshparttable.meta.h"

void cGcMechMeshPartTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23264320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMechMeshPartTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23266992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMechMeshPartTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23267648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

