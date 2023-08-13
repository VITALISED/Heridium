#include "gccharacterjetpackeffect.meta.h"

void cGcCharacterJetpackEffect::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28979392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCharacterJetpackEffect::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28987072);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCharacterJetpackEffect::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28988784);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

