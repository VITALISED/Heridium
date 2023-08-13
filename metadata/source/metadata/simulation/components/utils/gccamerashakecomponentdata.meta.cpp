#include "gccamerashakecomponentdata.meta.h"

void cGcCameraShakeComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28598752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraShakeComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28604768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraShakeComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28606336);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

