#include "gcidlookuppaths.meta.h"

void cGcIDLookupPaths::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(22625728);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcIDLookupPaths::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(22631872);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcIDLookupPaths::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(22633280);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

