#include "gcbuttonspawnoffset.meta.h"

void cGcButtonSpawnOffset::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24309728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcButtonSpawnOffset::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313200);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcButtonSpawnOffset::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314048);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

