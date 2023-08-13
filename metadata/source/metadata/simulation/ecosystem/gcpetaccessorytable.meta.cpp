#include "gcpetaccessorytable.meta.h"

void cGcPetAccessoryTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27449632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPetAccessoryTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27453040);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPetAccessoryTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27454160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

