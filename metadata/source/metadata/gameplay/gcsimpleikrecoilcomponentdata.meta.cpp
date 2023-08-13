#include "gcsimpleikrecoilcomponentdata.meta.h"

void cGcSimpleIkRecoilComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34556256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSimpleIkRecoilComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSimpleIkRecoilComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560576);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

