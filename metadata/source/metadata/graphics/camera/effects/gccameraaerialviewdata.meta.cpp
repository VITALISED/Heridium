#include "gccameraaerialviewdata.meta.h"

void cGcCameraAerialViewData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31574368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraAerialViewData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraAerialViewData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578640);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

