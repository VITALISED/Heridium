#include "tklsystemglobalrestriction.meta.h"

void cTkLSystemGlobalRestriction::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21375632);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemGlobalRestriction::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemGlobalRestriction::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379856);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

