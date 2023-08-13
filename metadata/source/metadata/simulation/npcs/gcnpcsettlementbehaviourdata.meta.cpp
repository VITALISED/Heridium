#include "gcnpcsettlementbehaviourdata.meta.h"

void cGcNPCSettlementBehaviourData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24842624);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSettlementBehaviourData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846384);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSettlementBehaviourData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847360);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

