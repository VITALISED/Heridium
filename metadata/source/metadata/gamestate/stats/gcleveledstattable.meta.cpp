#include "gcleveledstattable.meta.h"

void cGcLeveledStatTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33020144);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcLeveledStatTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcLeveledStatTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

