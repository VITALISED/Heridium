#include "gcwfcmoduleset.meta.h"

void cGcWFCModuleSet::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26810336);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCModuleSet::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26811616);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCModuleSet::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26812064);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

