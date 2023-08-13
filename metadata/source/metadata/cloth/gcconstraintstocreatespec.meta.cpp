#include "gcconstraintstocreatespec.meta.h"

void cGcConstraintsToCreateSpec::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34848544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcConstraintsToCreateSpec::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcConstraintsToCreateSpec::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

