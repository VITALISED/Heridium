#include "gcsettlementstattype.meta.h"

void cGcSettlementStatType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34555936);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementStatType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559600);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementStatType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560528);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

