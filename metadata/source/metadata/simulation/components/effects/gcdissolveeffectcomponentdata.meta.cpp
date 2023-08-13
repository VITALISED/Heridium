#include "gcdissolveeffectcomponentdata.meta.h"

void cGcDissolveEffectComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28867376);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcDissolveEffectComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28873664);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcDissolveEffectComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28875072);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

