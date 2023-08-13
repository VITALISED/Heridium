#include "gccombateffectdamagemultiplier.meta.h"

void cGcCombatEffectDamageMultiplier::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(24500240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCombatEffectDamageMultiplier::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(24503248);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCombatEffectDamageMultiplier::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(24504016);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

