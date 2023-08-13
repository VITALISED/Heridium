#include "gccloudproperties.meta.h"

void cGcCloudProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27339696);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCloudProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27341840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCloudProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27342752);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

