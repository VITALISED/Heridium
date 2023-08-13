#include "tkinputhandenum.meta.h"

void cTkInputHandEnum::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21375312);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInputHandEnum::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21378624);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInputHandEnum::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21379808);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

