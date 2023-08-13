#include "gccharactercontroloutputspace.meta.h"

void cGcCharacterControlOutputSpace::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28979072);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterControlOutputSpace::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28986992);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterControlOutputSpace::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988736);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

