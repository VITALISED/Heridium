#include "gcspaceskycolours.meta.h"

void cGcSpaceSkyColours::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27120240);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSpaceSkyColours::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27124336);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSpaceSkyColours::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27125168);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

