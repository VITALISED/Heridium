#include "gcfrigatetraitstrength.meta.h"

void cGcFrigateTraitStrength::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(30587392);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateTraitStrength::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(30590800);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateTraitStrength::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(30592160);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

