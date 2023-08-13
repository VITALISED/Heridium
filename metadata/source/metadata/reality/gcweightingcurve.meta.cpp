#include "gcweightingcurve.meta.h"

void cGcWeightingCurve::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(29092848);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcWeightingCurve::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(29094448);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcWeightingCurve::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(29095296);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

