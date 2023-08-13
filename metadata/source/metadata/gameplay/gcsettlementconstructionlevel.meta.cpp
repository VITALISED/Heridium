#include "gcsettlementconstructionlevel.meta.h"

void cGcSettlementConstructionLevel::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34555296);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementConstructionLevel::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34559440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementConstructionLevel::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34560432);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

