#include "gccreatureiktype.meta.h"

void cGcCreatureIkType::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(28158688);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcCreatureIkType::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(28160368);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcCreatureIkType::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(28161152);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

