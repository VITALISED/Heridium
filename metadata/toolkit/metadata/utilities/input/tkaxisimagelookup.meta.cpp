#include "tkaxisimagelookup.meta.h"

void cTkAxisImageLookup::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21093552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAxisImageLookup::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21097760);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAxisImageLookup::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21098976);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

