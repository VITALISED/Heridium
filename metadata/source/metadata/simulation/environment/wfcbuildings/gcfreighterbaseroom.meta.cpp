#include "gcfreighterbaseroom.meta.h"

void cGcFreighterBaseRoom::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26920576);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFreighterBaseRoom::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26926480);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFreighterBaseRoom::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26927888);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

