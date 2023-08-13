#include "gcmodelexplosionrules.meta.h"

void cGcModelExplosionRules::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26229392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcModelExplosionRules::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233360);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcModelExplosionRules::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234688);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

