#include "gcmodelexplosionrule.meta.h"

void cGcModelExplosionRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26229104);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcModelExplosionRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26233280);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcModelExplosionRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26234640);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

