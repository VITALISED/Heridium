#include "gcambientmodecameras.meta.h"

void cGcAmbientModeCameras::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28978144);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcAmbientModeCameras::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28986752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcAmbientModeCameras::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988592);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

