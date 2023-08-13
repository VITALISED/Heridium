#include "gcbuttonspawntable.meta.h"

void cGcButtonSpawnTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24310032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcButtonSpawnTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcButtonSpawnTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

