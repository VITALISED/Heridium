#include "gcproceduralproducttable.meta.h"

void cGcProceduralProductTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30356320);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcProceduralProductTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30358400);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcProceduralProductTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30359392);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

