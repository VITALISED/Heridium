#include "gcconsumableitemtable.meta.h"

void cGcConsumableItemTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30778976);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcConsumableItemTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30784880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcConsumableItemTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30786800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

