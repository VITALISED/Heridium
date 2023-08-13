#include "gcsettlementstatstrength.meta.h"

void cGcSettlementStatStrength::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29336560);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementStatStrength::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29341168);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementStatStrength::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29342560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

