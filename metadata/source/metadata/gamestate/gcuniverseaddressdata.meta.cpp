#include "gcuniverseaddressdata.meta.h"

void cGcUniverseAddressData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33227952);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUniverseAddressData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33230032);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUniverseAddressData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230992);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

