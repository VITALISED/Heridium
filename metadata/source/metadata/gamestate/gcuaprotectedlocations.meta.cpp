#include "gcuaprotectedlocations.meta.h"

void cGcUAProtectedLocations::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33227232);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUAProtectedLocations::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUAProtectedLocations::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

