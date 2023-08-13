#include "gcwonderplanetcategory.meta.h"

void cGcWonderPlanetCategory::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22500496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWonderPlanetCategory::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22505440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWonderPlanetCategory::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22506688);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

