#include "gccameraambientspacedata.meta.h"

void cGcCameraAmbientSpaceData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31500640);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraAmbientSpaceData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31506256);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraAmbientSpaceData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31507552);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

