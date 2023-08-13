#include "gcgalacticaddressdata.meta.h"

void cGcGalacticAddressData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33949536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGalacticAddressData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33952864);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGalacticAddressData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33953904);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

