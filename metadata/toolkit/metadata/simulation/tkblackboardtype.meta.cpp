#include "tkblackboardtype.meta.h"

void cTkBlackboardType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(21706528);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkBlackboardType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(21711008);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkBlackboardType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(21712544);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

