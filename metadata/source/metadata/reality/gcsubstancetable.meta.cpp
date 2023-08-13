#include "gcsubstancetable.meta.h"

void cGcSubstanceTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29185008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSubstanceTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29190448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSubstanceTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29191616);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

