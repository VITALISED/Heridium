#include "tklsystemglobalvariation.meta.h"

void cTkLSystemGlobalVariation::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21375968);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemGlobalVariation::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378784);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemGlobalVariation::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

