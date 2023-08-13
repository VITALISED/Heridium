#include "gccustomisationthrustereffect.meta.h"

void cGcCustomisationThrusterEffect::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28288928);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCustomisationThrusterEffect::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28292448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCustomisationThrusterEffect::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28293760);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

