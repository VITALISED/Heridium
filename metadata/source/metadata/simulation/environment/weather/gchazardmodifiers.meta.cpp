#include "gchazardmodifiers.meta.h"

void cGcHazardModifiers::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27041520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcHazardModifiers::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27047120);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcHazardModifiers::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27048320);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

