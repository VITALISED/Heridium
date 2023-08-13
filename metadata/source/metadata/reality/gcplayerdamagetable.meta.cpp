#include "gcplayerdamagetable.meta.h"

void cGcPlayerDamageTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30354720);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPlayerDamageTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30358000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPlayerDamageTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

