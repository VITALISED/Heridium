#include "gcikconstraint.meta.h"

void cGcIKConstraint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31117904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcIKConstraint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31123584);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcIKConstraint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

