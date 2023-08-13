#include "gcsettlementstatchange.meta.h"

void cGcSettlementStatChange::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29336032);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementStatChange::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341008);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementStatChange::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

