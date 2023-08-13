#include "gctextstyleoutline.meta.h"

void cGcTextStyleOutline::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(31230496);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcTextStyleOutline::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(31232640);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcTextStyleOutline::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(31233696);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

