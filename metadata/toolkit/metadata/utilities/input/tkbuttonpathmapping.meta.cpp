#include "tkbuttonpathmapping.meta.h"

void cTkButtonPathMapping::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21094352);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkButtonPathMapping::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21098000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkButtonPathMapping::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099120);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

