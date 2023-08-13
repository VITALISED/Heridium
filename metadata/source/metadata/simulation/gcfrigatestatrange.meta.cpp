#include "gcfrigatestatrange.meta.h"

void cGcFrigateStatRange::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(26474544);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcFrigateStatRange::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(26480000);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcFrigateStatRange::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(26481504);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

