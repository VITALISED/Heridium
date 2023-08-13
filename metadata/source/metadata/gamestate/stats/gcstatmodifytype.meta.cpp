#include "gcstatmodifytype.meta.h"

void cGcStatModifyType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33022896);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatModifyType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025952);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatModifyType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33027136);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

