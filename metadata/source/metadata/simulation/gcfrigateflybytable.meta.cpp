#include "gcfrigateflybytable.meta.h"

void cGcFrigateFlybyTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26474064);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateFlybyTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26479840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateFlybyTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

