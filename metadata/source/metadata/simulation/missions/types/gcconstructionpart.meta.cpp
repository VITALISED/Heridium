#include "gcconstructionpart.meta.h"

void cGcConstructionPart::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(25052112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcConstructionPart::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(25059936);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcConstructionPart::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(25061664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

