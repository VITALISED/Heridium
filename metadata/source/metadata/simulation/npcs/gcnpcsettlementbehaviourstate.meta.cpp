#include "gcnpcsettlementbehaviourstate.meta.h"

void cGcNPCSettlementBehaviourState::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24843728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSettlementBehaviourState::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSettlementBehaviourState::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

