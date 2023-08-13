#include "gcplanetcloudproperties.meta.h"

void cGcPlanetCloudProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27234768);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetCloudProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27236208);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetCloudProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27236848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

