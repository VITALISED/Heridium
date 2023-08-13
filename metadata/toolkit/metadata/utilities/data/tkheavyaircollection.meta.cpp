#include "tkheavyaircollection.meta.h"

void cTkHeavyAirCollection::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21372304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkHeavyAirCollection::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21377984);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkHeavyAirCollection::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379424);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

