#include "gcblocklistpersistence.meta.h"

void cGcBlockListPersistence::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(23062192);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcBlockListPersistence::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(23068704);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcBlockListPersistence::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(23070272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

