#include "gcwfcmoduleprototype.meta.h"

void cGcWFCModulePrototype::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26809696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCModulePrototype::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26811536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCModulePrototype::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26812016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

