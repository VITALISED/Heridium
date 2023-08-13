#include "gcknownthingspreset.meta.h"

void cGcKnownThingsPreset::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33783072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcKnownThingsPreset::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33789488);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcKnownThingsPreset::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33790896);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

