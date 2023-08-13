#include "tklsysteminnerrule.meta.h"

void cTkLSystemInnerRule::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21376288);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkLSystemInnerRule::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378864);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkLSystemInnerRule::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379952);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

