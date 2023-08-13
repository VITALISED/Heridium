#include "gccostpolicecargobribe.meta.h"

void cGcCostPoliceCargoBribe::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30680560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCostPoliceCargoBribe::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30686160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCostPoliceCargoBribe::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30687904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

