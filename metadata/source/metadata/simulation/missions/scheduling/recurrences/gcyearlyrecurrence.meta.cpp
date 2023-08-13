#include "gcyearlyrecurrence.meta.h"

void cGcYearlyRecurrence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25536880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcYearlyRecurrence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25538992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcYearlyRecurrence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25540128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

