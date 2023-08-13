#include "gcsettlementperkusefuldata.meta.h"

void cGcSettlementPerkUsefulData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29335472);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementPerkUsefulData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29340848);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementPerkUsefulData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342368);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

