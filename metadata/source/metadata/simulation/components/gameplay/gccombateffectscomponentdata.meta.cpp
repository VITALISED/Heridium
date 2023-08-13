#include "gccombateffectscomponentdata.meta.h"

void cGcCombatEffectsComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28865536);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCombatEffectsComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873344);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCombatEffectsComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28874880);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

