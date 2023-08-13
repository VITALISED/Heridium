#include "gcstyleprop_colour.meta.h"

void cGcStyleProp_Colour::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31121648);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStyleProp_Colour::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31124384);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStyleProp_Colour::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31125504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

