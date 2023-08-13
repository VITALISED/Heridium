#include "gcnpcsettlementbehaviourobjecttypeweightentry.meta.h"

void cGcNPCSettlementBehaviourObjectTypeWeightEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24843456);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSettlementBehaviourObjectTypeWeightEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSettlementBehaviourObjectTypeWeightEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847456);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

