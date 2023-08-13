#include "gcsettlementperkdata.meta.h"

void cGcSettlementPerkData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29335152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementPerkData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29340768);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementPerkData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

