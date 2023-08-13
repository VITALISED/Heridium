#include "gcselectableobjectspawnlist.meta.h"

void cGcSelectableObjectSpawnList::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27043648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSelectableObjectSpawnList::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047680);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSelectableObjectSpawnList::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048656);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

