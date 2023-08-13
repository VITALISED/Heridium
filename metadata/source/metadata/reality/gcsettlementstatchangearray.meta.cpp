#include "gcsettlementstatchangearray.meta.h"

void cGcSettlementStatChangeArray::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29336304);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementStatChangeArray::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341088);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementStatChangeArray::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

