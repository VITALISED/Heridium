#include "gcrewarddestructtable.meta.h"

void cGcRewardDestructTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28984112);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcRewardDestructTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcRewardDestructTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28989312);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

