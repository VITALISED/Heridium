#include "gcshipaicombatdefinition.meta.h"

void cGcShipAICombatDefinition::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23475552);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcShipAICombatDefinition::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23480752);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcShipAICombatDefinition::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23481968);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

