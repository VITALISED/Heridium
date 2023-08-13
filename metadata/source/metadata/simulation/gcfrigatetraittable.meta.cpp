#include "gcfrigatetraittable.meta.h"

void cGcFrigateTraitTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26477280);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateTraitTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateTraitTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481840);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

