#include "gccombateffectsproperties.meta.h"

void cGcCombatEffectsProperties::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28866048);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCombatEffectsProperties::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873424);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCombatEffectsProperties::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28874928);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

