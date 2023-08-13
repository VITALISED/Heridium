#include "gccreatureeffecttrigger.meta.h"

void cGcCreatureEffectTrigger::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27873200);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureEffectTrigger::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878496);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureEffectTrigger::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879936);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

