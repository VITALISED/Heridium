#include "gccamerashakedata.meta.h"

void cGcCameraShakeData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31502512);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraShakeData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506656);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraShakeData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31507920);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

