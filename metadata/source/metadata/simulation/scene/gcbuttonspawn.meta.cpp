#include "gcbuttonspawn.meta.h"

void cGcButtonSpawn::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24309376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcButtonSpawn::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24313120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcButtonSpawn::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24314000);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

