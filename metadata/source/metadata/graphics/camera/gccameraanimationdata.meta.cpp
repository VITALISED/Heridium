#include "gccameraanimationdata.meta.h"

void cGcCameraAnimationData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31501488);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraAnimationData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506416);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraAnimationData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31507648);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

