#include "gcsettlementperkstable.meta.h"

void cGcSettlementPerksTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29335776);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementPerksTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29340928);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementPerksTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

