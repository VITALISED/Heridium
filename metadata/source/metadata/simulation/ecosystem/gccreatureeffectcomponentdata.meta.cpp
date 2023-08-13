#include "gccreatureeffectcomponentdata.meta.h"

void cGcCreatureEffectComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27665008);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureEffectComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27669376);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureEffectComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670560);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

