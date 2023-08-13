#include "tkaxispathmapping.meta.h"

void cTkAxisPathMapping::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21093808);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkAxisPathMapping::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21097840);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkAxisPathMapping::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21099024);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

