#include "gcplanetinfo.meta.h"

void cGcPlanetInfo::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23993520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetInfo::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23996288);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetInfo::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23997216);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

