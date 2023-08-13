#include "gcpersistentbaseentry.meta.h"

void cGcPersistentBaseEntry::ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerRead classPtrReadFunc = (__HERIDIUM_ClassPointerRead)__HERIDIUM_OFFSET(34075120);
    return classPtrReadFunc(lPtr, lDataNode, lpAllocator);
}

bool cGcPersistentBaseEntry::ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename)
{
    __HERIDIUM_ClassPointerSave classPtrSaveFunc = (__HERIDIUM_ClassPointerSave)__HERIDIUM_OFFSET(34077312);
    return classPtrReadFunc(lPtr, lpacFilename);
}

void cGcPersistentBaseEntry::ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator)
{
    __HERIDIUM_ClassPointerWrite classPtrWriteFunc = (__HERIDIUM_ClassPointerWrite)__HERIDIUM_OFFSET(34078272);
    return classPtrWriteFunc(lPtr, lDataNode, lpAllocator);
}

