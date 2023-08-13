#include "gccustomisationcameradata.meta.h"

void cGcCustomisationCameraData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28400384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomisationCameraData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28404496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCustomisationCameraData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28405760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

