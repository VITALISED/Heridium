#include "gcnpcsettlementbehaviourbuildingclasscapacityentry.meta.h"

void cGcNPCSettlementBehaviourBuildingClassCapacityEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24842016);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcNPCSettlementBehaviourBuildingClassCapacityEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24846224);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcNPCSettlementBehaviourBuildingClassCapacityEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24847264);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

