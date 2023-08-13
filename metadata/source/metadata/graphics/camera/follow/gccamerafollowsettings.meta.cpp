#include "gccamerafollowsettings.meta.h"

void cGcCameraFollowSettings::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31575072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCameraFollowSettings::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31578080);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCameraFollowSettings::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31578688);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

