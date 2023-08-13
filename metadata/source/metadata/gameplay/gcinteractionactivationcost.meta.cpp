#include "gcinteractionactivationcost.meta.h"

void cGcInteractionActivationCost::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34746384);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcInteractionActivationCost::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34748688);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcInteractionActivationCost::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34749536);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

