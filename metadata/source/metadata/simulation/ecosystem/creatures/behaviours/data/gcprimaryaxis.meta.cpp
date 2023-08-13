#include "gcprimaryaxis.meta.h"

void cGcPrimaryAxis::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28159008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPrimaryAxis::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28160448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPrimaryAxis::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28161200);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

