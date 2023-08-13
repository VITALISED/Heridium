#include "tkinstancewindcomponentdata.meta.h"

void cTkInstanceWindComponentData::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22312464);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cTkInstanceWindComponentData::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22314976);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cTkInstanceWindComponentData::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22315664);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

