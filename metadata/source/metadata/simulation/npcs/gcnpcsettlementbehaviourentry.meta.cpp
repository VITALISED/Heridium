#include "gcnpcsettlementbehaviourentry.meta.h"

void cGcNPCSettlementBehaviourEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24843152);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSettlementBehaviourEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846464);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSettlementBehaviourEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847408);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

