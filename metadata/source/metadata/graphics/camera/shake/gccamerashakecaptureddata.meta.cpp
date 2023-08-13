#include "gccamerashakecaptureddata.meta.h"

void cGcCameraShakeCapturedData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31502256);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraShakeCapturedData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraShakeCapturedData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31507872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

