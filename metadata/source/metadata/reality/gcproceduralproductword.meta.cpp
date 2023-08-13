#include "gcproceduralproductword.meta.h"

void cGcProceduralProductWord::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30213776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralProductWord::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30219568);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralProductWord::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30220928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

