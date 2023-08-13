#include "gcsettlementstate.meta.h"

void cGcSettlementState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33223904);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSettlementState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33229152);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSettlementState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33230464);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

