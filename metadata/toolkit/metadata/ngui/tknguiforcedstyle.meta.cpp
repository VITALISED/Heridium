#include "tknguiforcedstyle.meta.h"

void cTkNGuiForcedStyle::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22048656);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkNGuiForcedStyle::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22052960);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkNGuiForcedStyle::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22054144);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

