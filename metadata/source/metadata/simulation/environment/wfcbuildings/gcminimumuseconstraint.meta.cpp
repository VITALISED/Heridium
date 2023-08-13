#include "gcminimumuseconstraint.meta.h"

void cGcMinimumUseConstraint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26921152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcMinimumUseConstraint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26926640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcMinimumUseConstraint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26927984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

