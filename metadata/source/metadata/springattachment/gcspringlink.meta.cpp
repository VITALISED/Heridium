#include "gcspringlink.meta.h"

void cGcSpringLink::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23068256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpringLink::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23070144);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpringLink::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23071136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

