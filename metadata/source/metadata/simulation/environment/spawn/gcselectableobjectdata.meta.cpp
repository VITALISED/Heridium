#include "gcselectableobjectdata.meta.h"

void cGcSelectableObjectData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27042752);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcSelectableObjectData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047440);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcSelectableObjectData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048512);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

