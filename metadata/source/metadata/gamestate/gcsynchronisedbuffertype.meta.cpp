#include "gcsynchronisedbuffertype.meta.h"

void cGcSynchronisedBufferType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33225552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSynchronisedBufferType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229552);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSynchronisedBufferType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230704);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

