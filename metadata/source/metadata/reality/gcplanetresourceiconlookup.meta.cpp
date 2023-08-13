#include "gcplanetresourceiconlookup.meta.h"

void cGcPlanetResourceIconLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30353984);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlanetResourceIconLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30357840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlanetResourceIconLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359056);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

