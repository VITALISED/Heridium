#include "gccreaturefilenametable.meta.h"

void cGcCreatureFilenameTable::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(27873600);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureFilenameTable::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(27878576);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureFilenameTable::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(27879984);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

