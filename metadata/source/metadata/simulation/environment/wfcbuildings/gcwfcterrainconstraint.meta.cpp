#include "gcwfcterrainconstraint.meta.h"

void cGcWFCTerrainConstraint::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26810896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWFCTerrainConstraint::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26811696);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWFCTerrainConstraint::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26812112);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

