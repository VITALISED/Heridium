#include "tkblackboarddefaultvaluefloat.meta.h"

void cTkBlackboardDefaultValueFloat::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21704960);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBlackboardDefaultValueFloat::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21710608);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBlackboardDefaultValueFloat::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712304);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

