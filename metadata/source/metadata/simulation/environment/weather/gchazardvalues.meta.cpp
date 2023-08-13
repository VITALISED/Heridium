#include "gchazardvalues.meta.h"

void cGcHazardValues::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27042160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHazardValues::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHazardValues::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

