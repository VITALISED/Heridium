#include "gcgeneratedbasepruningrule.meta.h"

void cGcGeneratedBasePruningRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34205648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcGeneratedBasePruningRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34211968);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcGeneratedBasePruningRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34213488);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

