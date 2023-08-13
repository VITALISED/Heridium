#include "gccombateffecttype.meta.h"

void cGcCombatEffectType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34847680);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCombatEffectType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34851472);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCombatEffectType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34852560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

