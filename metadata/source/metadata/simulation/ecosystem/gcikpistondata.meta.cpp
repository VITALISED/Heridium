#include "gcikpistondata.meta.h"

void cGcIkPistonData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27447792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcIkPistonData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27452560);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcIkPistonData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27453872);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

