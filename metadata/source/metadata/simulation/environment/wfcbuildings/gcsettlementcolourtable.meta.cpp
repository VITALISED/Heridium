#include "gcsettlementcolourtable.meta.h"

void cGcSettlementColourTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26922160);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementColourTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26926880);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementColourTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26928128);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

