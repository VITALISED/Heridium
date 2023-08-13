#include "gcbytebeaticons.meta.h"

void cGcByteBeatIcons::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31415376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcByteBeatIcons::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31423984);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcByteBeatIcons::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31425824);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

