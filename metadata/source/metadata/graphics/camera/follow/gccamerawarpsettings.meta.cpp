#include "gccamerawarpsettings.meta.h"

void cGcCameraWarpSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31575344);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraWarpSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578160);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraWarpSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

