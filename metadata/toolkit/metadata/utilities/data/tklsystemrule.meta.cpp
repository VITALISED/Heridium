#include "tklsystemrule.meta.h"

void cTkLSystemRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21377120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21379104);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21380096);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

