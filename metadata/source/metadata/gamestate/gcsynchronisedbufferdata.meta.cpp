#include "gcsynchronisedbufferdata.meta.h"

void cGcSynchronisedBufferData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33225296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSynchronisedBufferData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSynchronisedBufferData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

