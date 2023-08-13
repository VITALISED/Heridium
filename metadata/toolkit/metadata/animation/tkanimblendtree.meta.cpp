#include "tkanimblendtree.meta.h"

void cTkAnimBlendTree::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22419440);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAnimBlendTree::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22425136);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAnimBlendTree::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22426416);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

