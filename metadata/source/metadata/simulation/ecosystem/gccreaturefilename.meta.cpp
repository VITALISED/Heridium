#include "gccreaturefilename.meta.h"

void cGcCreatureFilename::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27665520);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureFilename::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27669536);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureFilename::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27670800);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

