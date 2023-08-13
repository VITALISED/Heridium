#include "gcstyleprop_size.meta.h"

void cGcStyleProp_Size::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31122368);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStyleProp_Size::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124544);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStyleProp_Size::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125728);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

