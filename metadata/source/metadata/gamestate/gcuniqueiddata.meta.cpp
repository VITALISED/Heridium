#include "gcuniqueiddata.meta.h"

void cGcUniqueIdData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33227520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcUniqueIdData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcUniqueIdData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

