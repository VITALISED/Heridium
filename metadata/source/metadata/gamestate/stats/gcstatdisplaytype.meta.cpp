#include "gcstatdisplaytype.meta.h"

void cGcStatDisplayType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(33021792);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcStatDisplayType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(33025632);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcStatDisplayType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(33026944);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

