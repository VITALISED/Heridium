#include "gctradingsupplydata.meta.h"

void cGcTradingSupplyData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33226880);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTradingSupplyData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229792);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTradingSupplyData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230848);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

